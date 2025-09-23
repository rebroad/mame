// license:BSD-3-Clause
// copyright-holders:Grant Galitz, Katelyn Gadd
/***************************************************************************

	JSMAME web audio backend v0.5 - Modern AudioWorkletNode implementation

	Original by katelyn gadd - kg at luminance dot org ; @antumbral on twitter
	Substantial changes by taisel
	Modernized by AI Assistant to use AudioWorkletNode instead of deprecated ScriptProcessorNode

***************************************************************************/

var jsmame_web_audio = (function () {

var context = null;
var gain_node = null;
var workletNode = null;
var sampleScale = 32766;
var inputBuffer = new Float32Array(44100);
var bufferSize = 44100;
var start = 0;
var rear = 0;
var watchDogDateLast = null;
var watchDogTimerEvent = null;
var audioWorkletSupported = false;
var audioWorkletReady = false;

// AudioWorklet processor code (inline to avoid separate file)
const audioWorkletCode = `
class MameAudioProcessor extends AudioWorkletProcessor {
  constructor() {
    super();
    this.bufferSize = 44100;
    this.inputBuffer = new Float32Array(this.bufferSize);
    this.start = 0;
    this.rear = 0;
    this.sampleScale = 32766;
    
    // Listen for audio data from main thread
    this.port.onmessage = (event) => {
      const { samples, pBuffer, samplesThisFrame } = event.data;
      this.processAudioData(samples, pBuffer, samplesThisFrame);
    };
  }

  processAudioData(samples, pBuffer, samplesThisFrame) {
    for (let i = 0; i < samplesThisFrame; i++) {
      const offset = (pBuffer / 2) + (i * 2);
      const leftSample = samples[offset];
      const rightSample = samples[offset + 1];
      
      // Normalize from signed int16 to signed float
      const leftSampleFloat = leftSample / this.sampleScale;
      const rightSampleFloat = rightSample / this.sampleScale;
      
      this.inputBuffer[this.rear++] = leftSampleFloat;
      this.inputBuffer[this.rear++] = rightSampleFloat;
      
      if (this.rear === this.bufferSize) {
        this.rear = 0;
      }
      if (this.start === this.rear) {
        this.start += 2;
        if (this.start === this.bufferSize) {
          this.start = 0;
        }
      }
    }
  }

  process(inputs, outputs, parameters) {
    const output = outputs[0];
    const leftChannel = output[0];
    const rightChannel = output[1];
    
    // Copy samples from input buffer to output
    for (let index = 0; index < 128 && this.start !== this.rear; index++) {
      leftChannel[index] = this.inputBuffer[this.start++];
      rightChannel[index] = this.inputBuffer[this.start++];
      
      if (this.start === this.bufferSize) {
        this.start = 0;
      }
    }
    
    // Pad with latest sample if underrunning
    const lastIndex = (index === 0 ? this.bufferSize : index) - 1;
    while (index < 128) {
      leftChannel[index] = leftChannel[lastIndex];
      rightChannel[index] = rightChannel[lastIndex];
      index++;
    }
    
    return true;
  }
}

registerProcessor('mame-audio-processor', MameAudioProcessor);
`;

async function lazy_init() {
    if (context) {
        return;
    }
    
    if (typeof AudioContext !== "undefined") {
        context = new AudioContext();
    } else if (typeof webkitAudioContext !== "undefined") {
        context = new webkitAudioContext();
    } else {
        return;
    }
    
    // Check for AudioWorklet support
    if (context.audioWorklet) {
        try {
            // Create a blob URL for the AudioWorklet processor
            const blob = new Blob([audioWorkletCode], { type: 'application/javascript' });
            const workletUrl = URL.createObjectURL(blob);
            
            await context.audioWorklet.addModule(workletUrl);
            audioWorkletSupported = true;
            URL.revokeObjectURL(workletUrl);
        } catch (error) {
            console.warn('AudioWorklet not supported, falling back to ScriptProcessorNode:', error);
            audioWorkletSupported = false;
        }
    } else {
        audioWorkletSupported = false;
    }
    
    // Generate a volume control node
    gain_node = context.createGain();
    gain_node.gain.value = 1.0;
    gain_node.connect(context.destination);
    
    // Initialize the streaming event
    await init_event();
}

async function init_event() {
    if (audioWorkletSupported) {
        try {
            workletNode = new AudioWorkletNode(context, 'mame-audio-processor');
            workletNode.connect(gain_node);
            audioWorkletReady = true;
            initializeWatchDog();
        } catch (error) {
            console.warn('Failed to create AudioWorkletNode, falling back to ScriptProcessorNode:', error);
            audioWorkletSupported = false;
            init_event_legacy();
        }
    } else {
        init_event_legacy();
    }
}

function init_event_legacy() {
    // Fallback to ScriptProcessorNode for older browsers
    let eventNode;
    if (typeof context.createScriptProcessor === "function") {
        eventNode = context.createScriptProcessor(4096, 0, 2);
    } else {
        eventNode = context.createJavaScriptNode(4096, 0, 2);
    }
    
    eventNode.onaudioprocess = tick;
    eventNode.connect(gain_node);
    initializeWatchDog();
}

function initializeWatchDog() {
    watchDogDateLast = (new Date()).getTime();
    if (watchDogTimerEvent === null) {
        watchDogTimerEvent = setInterval(function () {
            const timeDiff = (new Date()).getTime() - watchDogDateLast;
            if (timeDiff > 500) {
                // Work around autoplay restrictions in Chrome 71+
                if (context) {
                    context.resume();
                }
            }
        }, 500);
    }
}

function stream_sink_update(pBuffer, samples_this_frame) {
    lazy_init();
    if (!context) return;
    
    if (audioWorkletSupported && audioWorkletReady && workletNode) {
        // Use AudioWorkletNode
        const samples = new Int16Array(HEAP16.buffer, pBuffer, samples_this_frame * 2);
        workletNode.port.postMessage({
            samples: samples,
            pBuffer: pBuffer,
            samplesThisFrame: samples_this_frame
        });
    } else {
        // Fallback to ScriptProcessorNode
        for (let i = 0, l = samples_this_frame | 0; i < l; i++) {
            const offset = ((pBuffer / 2) | 0) + ((i * 2) | 0);
            const left_sample = HEAP16[offset];
            const right_sample = HEAP16[(offset + 1) | 0];
            
            const left_sample_float = left_sample / sampleScale;
            const right_sample_float = right_sample / sampleScale;
            
            inputBuffer[rear++] = left_sample_float;
            inputBuffer[rear++] = right_sample_float;
            
            if (rear === bufferSize) {
                rear = 0;
            }
            if (start === rear) {
                start += 2;
                if (start === bufferSize) {
                    start = 0;
                }
            }
        }
    }
}

function tick(event) {
    // Legacy ScriptProcessorNode callback
    const buffers = [];
    for (let bufferCount = 0; bufferCount < 2; ++bufferCount) {
        buffers[bufferCount] = event.outputBuffer.getChannelData(bufferCount);
    }
    
    for (let index = 0; index < 4096 && start !== rear; ++index) {
        buffers[0][index] = inputBuffer[start++];
        buffers[1][index] = inputBuffer[start++];
        if (start === bufferSize) {
            start = 0;
        }
    }
    
    const idx = (index === 0 ? bufferSize : index) - 1;
    while (index < 4096) {
        buffers[0][index] = buffers[0][idx];
        buffers[1][index++] = buffers[1][idx];
    }
    
    watchDogDateLast = (new Date()).getTime();
}

function get_context() {
    return context;
}

function sample_count() {
    if (!context) {
        return -1;
    }
    let count = rear - start;
    if (start > rear) {
        count += bufferSize;
    }
    return count;
}

return {
    stream_sink_update: stream_sink_update,
    get_context: get_context,
    sample_count: sample_count
};

})();

window.jsmame_stream_sink_update = jsmame_web_audio.stream_sink_update;
window.jsmame_sample_count = jsmame_web_audio.sample_count;
