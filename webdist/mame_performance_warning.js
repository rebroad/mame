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
    let detectedGameSpeed = 0;
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

    // Monitor both MAME frame submissions and browser requestAnimationFrame rate
    const originalConsoleLog = console.log;
    let mameFrameSubmissionCount = 0;
    let mameFrameSubmissionStartTime = 0;
    let lastMameFrameSubmissionTime = 0;

    // Browser frame rate monitoring
    let browserFrameCount = 0;
    let browserFrameStartTime = 0;
    let browserFrameTimes = [];
    let browserFrameRate = 0;

    const monitorBrowserFrames = () => {
        if (!isMonitoring) return;

        const now = performance.now();
        if (browserFrameStartTime > 0) {
            const deltaTime = now - browserFrameStartTime;
            const fps = 1000 / deltaTime;
            browserFrameTimes.push(fps);

            // Keep only last 30 frame times
            if (browserFrameTimes.length > 30) {
                browserFrameTimes.shift();
            }

            // Calculate average browser frame rate
            if (browserFrameTimes.length >= 15) {
                browserFrameRate = browserFrameTimes.reduce((a, b) => a + b, 0) / browserFrameTimes.length;
            }
        }

        browserFrameStartTime = now;
        browserFrameCount++;

        if (isMonitoring) {
            requestAnimationFrame(monitorBrowserFrames);
        }
    };

    console.log = function(...args) {
        // Call original console.log
        originalConsoleLog.apply(console, args);

        // Check for MAME frame submission logs
        const message = args.join(' ');
        if (message.includes('WEBASM:')) {
            const match = message.match(/(\d+)\/(\d+) frames.*?(\d+\.\d+)ffps.*?Speed: (\d+\.\d+)%/);
            if (match) {
                const submitted = parseInt(match[1]);
                const total = parseInt(match[2]);
                const actualFps = parseFloat(match[3]);
                const gameSpeed = parseFloat(match[4]);

                mameFrameSubmissionCount++;
                const now = performance.now();

                if (mameFrameSubmissionStartTime === 0) {
                    mameFrameSubmissionStartTime = now;
                }

                lastMameFrameSubmissionTime = now;

                // Use MAME's actual frame submission rate for performance monitoring
                detectedFrameRate = actualFps;
                detectedGameSpeed = gameSpeed;

                // Check if MAME's frame submission rate is too low (indicating throttling)
                // With frameskip=10, we expect ~8.5fps, so anything below 6fps suggests throttling
                if (actualFps < 6.0) {
                    isThrottled = true;

                    // Show warning popup immediately when MAME frame rate drops below 6fps
                    if (!warningDismissed && !window.warningDismissed) {
                        // Remove any existing warning first
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
                        console.warn('⚠️ Low MAME frame submission rate detected:', actualFps.toFixed(1), 'fps (expected ~8.5fps with frameskip=10)');
                        lastWarningTime = now;
                        warningCount++;

                        if (warningCount >= MAX_WARNINGS) {
                            console.log('🔇 Performance warnings muted (too many low frame rate detections)');
                        }
                    }
                }
            }
        }
    };

    // Function to log browser frame rate once per second
    function logBrowserFrameRate() {
        if (browserFrameRate > 0) {
            const timestamp = new Date().toLocaleTimeString();
            console.log(`🖥️ Browser FPS Report [${timestamp}]: ${browserFrameRate.toFixed(1)}fps (Chrome requestAnimationFrame)`);
        }
    }

    // Start monitoring after MAME initializes
    setTimeout(() => {
        console.log('📊 Starting performance monitoring...');
        isMonitoring = true;

        // Start browser frame rate monitoring
        monitorBrowserFrames();

        // Start browser FPS logging (every 1 second)
        const browserFpsInterval = setInterval(logBrowserFrameRate, 1000);

        // Stop monitoring after 8 seconds
        setTimeout(() => {
            console.log('📊 Stopping performance monitoring...');
            isMonitoring = false;
            clearInterval(browserFpsInterval);
        }, 20000);
    }, 3000);


    function createPerformanceInfo() {
        return `
            <div style="margin-bottom: 10px;">
                <strong>Performance Issues Detected:</strong>
                <ul style="margin: 5px 0; padding-left: 20px;">
                    <li>MAME frame submission rate: ${detectedFrameRate.toFixed(1)}fps (expected ~8.5fps with frameskip=10)</li>
                    <li>Game speed: ${detectedGameSpeed.toFixed(1)}% (expected ~100%)</li>
                    <li>Browser rendering rate: ${browserFrameRate.toFixed(1)}fps (Chrome's requestAnimationFrame)</li>
                    <li>MAME is correctly submitting frames at reduced rate, but Chrome is still throttling game speed</li>
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
            title: `⚠️ Chrome Frame Rate Limiting (Warning #${warningDisplayCount})`,
            description: 'MAME is correctly submitting frames at reduced rate (frameskip working), but Chrome is still throttling the overall performance.',
            solution: 'Launch Chrome with:',
            additionalInfo: `
                <div style="background: rgba(255,255,255,0.2); padding: 8px; border-radius: 4px; font-family: monospace; font-size: 12px; margin-bottom: 10px;">
                    --disable-frame-rate-limit --autoplay-policy=no-user-gesture-required
                </div>
                <div style="font-size: 12px; color: rgba(255,255,255,0.8);">
                    MAME frameskip is working (submitting at ${detectedFrameRate.toFixed(1)}fps), but game speed is ${detectedGameSpeed.toFixed(1)}% (should be ~100%).
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
