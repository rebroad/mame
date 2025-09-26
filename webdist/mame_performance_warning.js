// Enhanced MAME Performance Warning with Frame Rate Detection
// Monitors both browser frame rate and MAME's own performance reporting

(function() {
    'use strict';
    
    console.log('🔍 MAME Performance Monitor starting...');
    
    // Detect Chrome/Chromium
    const isChrome = /Chrome|Chromium/.test(navigator.userAgent);
    
    // Performance monitoring variables
    let frameCount = 0;
    let lastTime = performance.now();
    let frameTimes = [];
    let isThrottled = false;
    let detectedFrameRate = 0;
    let mameSpeed = 0;
    let mameFrame = 0;
    
    // Monitor MAME console output for performance data
    const originalConsoleLog = console.log;
    console.log = function(...args) {
        const message = args.join(' ');
        
        // Parse MAME's WASM Speed output
        const speedMatch = message.match(/WASM Speed: ([\d.]+)% \(frame (\d+)\)/);
        if (speedMatch) {
            mameSpeed = parseFloat(speedMatch[1]);
            mameFrame = parseInt(speedMatch[2]);
            console.log('🎮 MAME Performance:', mameSpeed + '%', 'Frame:', mameFrame);
        }
        
        // Call original console.log
        originalConsoleLog.apply(console, args);
    };
    
    // Monitor frame rate for 8 seconds
    const monitorFrames = () => {
        const now = performance.now();
        const deltaTime = now - lastTime;
        
        if (lastTime > 0) {
            const fps = 1000 / deltaTime;
            frameTimes.push(fps);
            
            // Keep only last 30 frame times
            if (frameTimes.length > 30) {
                frameTimes.shift();
            }
            
            // Check if frame rate is significantly below 60fps
            if (frameTimes.length >= 15) {
                const avgFps = frameTimes.reduce((a, b) => a + b, 0) / frameTimes.length;
                detectedFrameRate = avgFps;
                
                if (avgFps < 54) { // 10% below 60fps
                    isThrottled = true;
                    console.warn('⚠️ Low frame rate detected:', avgFps.toFixed(1), 'fps');
                }
            }
        }
        
        lastTime = now;
        frameCount++;
    };
    
    // Start monitoring after MAME initializes
    setTimeout(() => {
        console.log('📊 Starting performance monitoring...');
        
        const interval = setInterval(monitorFrames, 100);
        
        // Stop monitoring after 8 seconds and analyze
        setTimeout(() => {
            clearInterval(interval);
            analyzePerformance();
        }, 8000);
    }, 3000);
    
    function analyzePerformance() {
        console.log('📊 Performance analysis complete');
        console.log('Browser:', isChrome ? 'Chrome/Chromium' : 'Other');
        console.log('Browser Frame Rate:', detectedFrameRate.toFixed(1), 'fps');
        console.log('MAME Speed:', mameSpeed + '%');
        console.log('Throttled:', isThrottled);
        
        if (isChrome && (isThrottled || mameSpeed < 90)) {
            showChromeWarning();
        } else if (isThrottled || mameSpeed < 90) {
            showGenericWarning();
        } else {
            console.log('✅ Performance looks good!');
        }
    }
    
    function showChromeWarning() {
        const warning = document.createElement('div');
        warning.style.cssText = `
            position: fixed;
            top: 20px;
            right: 20px;
            background: #ff6b6b;
            color: white;
            padding: 15px;
            border-radius: 8px;
            box-shadow: 0 4px 12px rgba(0,0,0,0.3);
            z-index: 10000;
            max-width: 450px;
            font-family: Arial, sans-serif;
            font-size: 14px;
            line-height: 1.4;
        `;
        
        const performanceInfo = `
            <div style="margin-bottom: 10px;">
                <strong>Performance Issues Detected:</strong>
                <ul style="margin: 5px 0; padding-left: 20px;">
                    ${detectedFrameRate < 54 ? `<li>Browser frame rate: ${detectedFrameRate.toFixed(1)}fps (expected ~60fps)</li>` : ''}
                    ${mameSpeed > 0 && mameSpeed < 90 ? `<li>MAME speed: ${mameSpeed}% (expected ~100%)</li>` : ''}
                </ul>
            </div>
        `;
        
        warning.innerHTML = `
            <div style="font-weight: bold; margin-bottom: 8px;">⚠️ Chrome Performance Issue</div>
            <div style="margin-bottom: 10px;">MAME is running slower than expected due to Chrome's frame rate limiting.</div>
            ${performanceInfo}
            <div style="margin-bottom: 10px;"><strong>Solution:</strong> Launch Chrome with:</div>
            <div style="background: rgba(255,255,255,0.2); padding: 8px; border-radius: 4px; font-family: monospace; font-size: 12px; margin-bottom: 10px;">
                --disable-frame-rate-limit --autoplay-policy=no-user-gesture-required
            </div>
            <div style="font-size: 12px; margin-bottom: 10px;">
                Or use the launch script: <code>./launch_mame_web.sh</code>
            </div>
            <button onclick="this.parentElement.remove()" style="
                background: rgba(255,255,255,0.2);
                border: 1px solid rgba(255,255,255,0.3);
                color: white;
                padding: 5px 10px;
                border-radius: 4px;
                cursor: pointer;
            ">Dismiss</button>
        `;
        
        document.body.appendChild(warning);
        
        // Auto-dismiss after 25 seconds
        setTimeout(() => {
            if (warning.parentElement) {
                warning.remove();
            }
        }, 25000);
    }
    
    function showGenericWarning() {
        const warning = document.createElement('div');
        warning.style.cssText = `
            position: fixed;
            top: 20px;
            right: 20px;
            background: #ffa726;
            color: white;
            padding: 15px;
            border-radius: 8px;
            box-shadow: 0 4px 12px rgba(0,0,0,0.3);
            z-index: 10000;
            max-width: 450px;
            font-family: Arial, sans-serif;
            font-size: 14px;
            line-height: 1.4;
        `;
        
        const performanceInfo = `
            <div style="margin-bottom: 10px;">
                <strong>Performance Issues Detected:</strong>
                <ul style="margin: 5px 0; padding-left: 20px;">
                    ${detectedFrameRate < 54 ? `<li>Browser frame rate: ${detectedFrameRate.toFixed(1)}fps (expected ~60fps)</li>` : ''}
                    ${mameSpeed > 0 && mameSpeed < 90 ? `<li>MAME speed: ${mameSpeed}% (expected ~100%)</li>` : ''}
                </ul>
            </div>
        `;
        
        warning.innerHTML = `
            <div style="font-weight: bold; margin-bottom: 8px;">⚠️ Performance Issue</div>
            <div style="margin-bottom: 10px;">MAME may not be running at optimal performance.</div>
            ${performanceInfo}
            <div style="margin-bottom: 10px;">Try using Firefox for better performance, or launch Chrome with performance flags.</div>
            <button onclick="this.parentElement.remove()" style="
                background: rgba(255,255,255,0.2);
                border: 1px solid rgba(255,255,255,0.3);
                color: white;
                padding: 5px 10px;
                border-radius: 4px;
                cursor: pointer;
            ">Dismiss</button>
        `;
        
        document.body.appendChild(warning);
        
        // Auto-dismiss after 20 seconds
        setTimeout(() => {
            if (warning.parentElement) {
                warning.remove();
            }
        }, 20000);
    }
})();
