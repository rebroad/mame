// Enhanced MAME Performance Warning with Frame Rate Detection
// Monitors both browser frame rate and MAME's own performance reporting

(function() {
    'use strict';

    console.log('🔍 MAME Performance Monitor starting...');

    // Detect Chrome/Chromium
    const isChrome = /Chrome|Chromium/.test(navigator.userAgent);

    // Performance monitoring variables
    let frameCount = 0;
    let lastTime = 0;
    let frameTimes = [];
    let isThrottled = false;
    let detectedFrameRate = 0;
    let mameSpeed = 0;
    let mameFrame = 0;
    let mameFps = 0;

    // Warning throttling
    let lastWarningTime = 0;
    let warningCount = 0;
    let warningDismissed = false; // Track if user dismissed the warning
    let isMonitoring = false; // Track if monitoring is active
    let warningDisplayCount = 0; // Track how warnings displayed
    const WARNING_THROTTLE_MS = 5000; // Only warn every 5 seconds
    const MAX_WARNINGS = 3; // Maximum warnings before stopping

    // Monitor frame rate using requestAnimationFrame
    const monitorFrames = () => {
        // Stop monitoring if flag is set
        if (!isMonitoring) return;

        const now = performance.now();
        const deltaTime = now - lastTime;

        if (frameCount > 0) {
            const fps = 1000 / deltaTime;
            frameTimes.push(fps);

            // Keep only last 30 frame times
            if (frameTimes.length > 30) {
                frameTimes.shift();
            }

            // Check if frame rate is below 60fps
            if (frameTimes.length >= 15) {
                const avgFps = frameTimes.reduce((a, b) => a + b, 0) / frameTimes.length;
                detectedFrameRate = avgFps;

                if (avgFps < 44) {
                    isThrottled = true;

                    if (!warningDismissed && !window.warningDismissed) {
                        const existingWarning = document.querySelector('.mame-performance-warning');
                        if (existingWarning) {
                            existingWarning.remove();
                            warningDisplayCount--;
                        }

                        // Increment warning display count
                        warningDisplayCount++;

                        if (isChrome) {
                            showChromeWarning();
                        } else {
                            showGenericWarning();
                        }
                    }

                    // Throttle console warnings to avoid spam
                    const now = performance.now();
                    if (now - lastWarningTime > WARNING_THROTTLE_MS && warningCount < MAX_WARNINGS) {
                        console.warn('⚠️ Low frame rate detected:', avgFps.toFixed(1), 'fps');
                        lastWarningTime = now;
                        warningCount++;

                        if (warningCount >= MAX_WARNINGS) {
                            console.log('🔇 Performance warnings muted (too many low frame rate detections)');
                        }
                    }
                }
            }
            lastTime = now;
        }

        frameCount++;

        // Continue monitoring if flag is still true
        if (isMonitoring) {
            requestAnimationFrame(monitorFrames);
        }
    };

    // Start monitoring after MAME initializes
    setTimeout(() => {
        console.log('📊 Starting performance monitoring...');
        isMonitoring = true;
        monitorFrames();

        // Stop monitoring after 8 seconds
        setTimeout(() => {
            console.log('📊 Stopping performance monitoring...');
            isMonitoring = false;
        }, 8000);
    }, 3000);


    function createPerformanceInfo() {
        return `
            <div style="margin-bottom: 10px;">
                <strong>Performance Issues Detected:</strong>
                <ul style="margin: 5px 0; padding-left: 20px;">
                    ${detectedFrameRate < 40 ? `<li>Browser frame rate: ${detectedFrameRate.toFixed(1)}fps (expected ~41fps)</li>` : ''}
                </ul>
            </div>
        `;
    }

    function createDismissButton() {
        return `
            <button onclick="this.parentElement.remove(); window.warningDismissed = true;" style="
                background: rgba(255,255,255,0.2);
                border: 1px solid rgba(255,255,255,0.3);
                color: white;
                padding: 5px 10px;
                border-radius: 4px;
                cursor: pointer;
            ">Dismiss</button>
        `;
    }

    function showWarning(config) {
        const warning = document.createElement('div');
        warning.className = 'mame-performance-warning';
        warning.style.cssText = `
            position: fixed;
            top: 20px;
            right: 20px;
            background: ${config.backgroundColor};
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

        const performanceInfo = createPerformanceInfo();

        warning.innerHTML = `
            <div style="font-weight: bold; margin-bottom: 8px;">${config.title}</div>
            <div style="margin-bottom: 10px;">${config.description}</div>
            ${performanceInfo}
            ${config.solution ? `<div style="margin-bottom: 10px;"><strong>Solution:</strong> ${config.solution}</div>` : ''}
            ${config.additionalInfo ? `<div style="margin-bottom: 10px;">${config.additionalInfo}</div>` : ''}
            ${createDismissButton()}
        `;

        document.body.appendChild(warning);

        // Auto-dismiss after specified time
        setTimeout(() => {
            if (warning.parentElement) {
                warning.remove();
            }
        }, config.autoDismissTime);
    }

    function showChromeWarning() {
        showWarning({
            backgroundColor: '#ff6b6b',
            title: `⚠️ Chrome Performance Issue (Warning #${warningDisplayCount})`,
            description: 'MAME is running slower than expected due to Chrome\'s frame rate limiting.',
            solution: 'Launch Chrome with:',
            additionalInfo: `
                <div style="background: rgba(255,255,255,0.2); padding: 8px; border-radius: 4px; font-family: monospace; font-size: 12px; margin-bottom: 10px;">
                    --disable-frame-rate-limit --autoplay-policy=no-user-gesture-required
                </div>
            `,
            autoDismissTime: 25000
        });
    }

    function showGenericWarning() {
        showWarning({
            backgroundColor: '#ffa726',
            title: `⚠️ Performance Issue (Warning #${warningDisplayCount})`,
            description: 'MAME may not be running at optimal performance.',
            additionalInfo: 'Try using Firefox for better performance, or launch Chrome with performance flags.',
            autoDismissTime: 20000
        });
    }
})();
