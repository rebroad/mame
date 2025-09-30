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
	let detectedFrameRate = 0;
	let mameSpeed = 0;
	let mameFrame = 0;
	let mameFps = 0;

	// MAME detection variables
	let mameIsRunning = false;
	let mameStartTime = 0;
	let baselineFps = 0;
	let warningShown = false;

	// Warning throttling
	let lastFpsLogTime = 0;
	let warningDismissed = false; // Track if user dismissed the warning
	let isMonitoring = false; // Track if monitoring is active
	let warningDisplayCount = 0; // Track how warnings displayed
	const WARNING_THROTTLE_MS = 5000; // Only warn every 5 seconds
	const MAX_WARNINGS = 3; // Maximum warnings before stopping

	// Monitor frame rate with throttling to avoid blocking event loop
	let lastMonitorTime = 0;
	const MONITOR_INTERVAL = 100; // Check every 100ms instead of every frame

	const monitorFrames = () => {
		// Stop monitoring if flag is set
		if (!isMonitoring) return;

		const now = performance.now();

		// Throttle monitoring to avoid blocking event loop
		if (now - lastMonitorTime < MONITOR_INTERVAL) {
			if (isMonitoring) {
				requestAnimationFrame(monitorFrames);
			}
			return;
		}
		lastMonitorTime = now;

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

				// Always log FPS to console (every 5 seconds)
				if (now - lastFpsLogTime > WARNING_THROTTLE_MS) {
					console.log('Frame rate detected:', avgFps.toFixed(1), 'fps');
					lastFpsLogTime = now;
				}

				// Only show GUI warning if MAME is running and FPS is low
				if (mameIsRunning && avgFps < 44 && !warningDismissed && !window.warningDismissed) {
						const existingWarning = document.querySelector('.mame-performance-warning');
						if (existingWarning) {
							existingWarning.remove();
						}

						if (isChrome) {
							showChromeWarning();
						} else {
							showGenericWarning();
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

	// Detect when MAME starts running
	function detectMAMEStart() {
		// Look for MAME canvas or Module initialization
		const canvas = document.querySelector('canvas');
		const hasModule = typeof Module !== 'undefined';
		const hasMameLog = document.querySelector('[id*="mame"], [class*="mame"]');

		if (canvas && hasModule && !mameIsRunning) {
			mameIsRunning = true;
			mameStartTime = performance.now();
			console.log('🎮 MAME detected as running - starting performance monitoring...');
			isMonitoring = true;
			monitorFrames();
		}
	}

	// Start monitoring after a delay, but only show warnings after MAME is running
	setTimeout(() => {
		console.log('📊 Starting performance monitoring...');
		isMonitoring = true;
		monitorFrames();

		// Check for MAME every 500ms
		const mameCheckInterval = setInterval(() => {
			detectMAMEStart();
			if (mameIsRunning) {
				clearInterval(mameCheckInterval);
			}
		}, 500);
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
			<button id="mame-dismiss-btn" style="
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

		// Add proper event listener for dismiss button with event delegation
		const dismissBtn = warning.querySelector('#mame-dismiss-btn');
		if (dismissBtn) {
			// Use both click and mousedown events for better responsiveness
			const handleDismiss = function(e) {
				e.preventDefault();
				e.stopPropagation();
				e.stopImmediatePropagation();

				// Increment warning count when user dismisses
				warningDisplayCount++;

				// Stop performance monitoring immediately
				isMonitoring = false;
				warningDismissed = true;
				window.warningDismissed = true;

				// Remove the warning
				if (warning.parentElement) {
					warning.remove();
				}

				console.log('🔇 Performance monitoring stopped by user');

				// Remove event listeners to prevent double-firing
				dismissBtn.removeEventListener('click', handleDismiss);
				dismissBtn.removeEventListener('mousedown', handleDismiss);
			};

			dismissBtn.addEventListener('click', handleDismiss, { capture: true });
			dismissBtn.addEventListener('mousedown', handleDismiss, { capture: true });
		}

		// Auto-dismiss after specified time (only if not manually dismissed)
		setTimeout(() => {
			if (warning.parentElement && !warningDismissed) {
				warning.remove();
			}
		}, config.autoDismissTime);
	}

	function showChromeWarning() {
		// Show compact warning if MAME is running and this is a subsequent warning
		if (mameIsRunning && warningDisplayCount > 1) {
			showCompactWarning('Chrome Performance Issue', 'FPS dropped during gameplay');
		} else {
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
	}

	function showGenericWarning() {
		// Show compact warning if MAME is running and this is a subsequent warning
		if (mameIsRunning && warningDisplayCount > 1) {
			showCompactWarning('Performance Issue', 'FPS dropped during gameplay');
		} else {
			showWarning({
				backgroundColor: '#ffa726',
				title: `⚠️ Performance Issue (Warning #${warningDisplayCount})`,
				description: 'MAME may not be running at optimal performance.',
				additionalInfo: 'Try using Firefox for better performance, or launch Chrome with performance flags.',
				autoDismissTime: 20000
			});
		}
	}

	function showCompactWarning(title, message) {
		const warning = document.createElement('div');
		warning.className = 'mame-performance-warning';
		warning.style.cssText = `
			position: fixed;
			top: 20px;
			right: 20px;
			background: rgba(255, 107, 107, 0.9);
			color: white;
			padding: 10px 15px;
			border-radius: 6px;
			box-shadow: 0 2px 8px rgba(0,0,0,0.3);
			z-index: 10000;
			max-width: 300px;
			font-family: Arial, sans-serif;
			font-size: 13px;
			line-height: 1.3;
		`;

		warning.innerHTML = `
			<div style="font-weight: bold; margin-bottom: 5px;">⚠️ ${title}</div>
			<div style="margin-bottom: 8px;">${message}</div>
			<button onclick="warningDisplayCount++; this.parentElement.remove();" style="
				background: rgba(255,255,255,0.2);
				border: 1px solid rgba(255,255,255,0.3);
				color: white;
				padding: 4px 8px;
				border-radius: 3px;
				cursor: pointer;
				font-size: 11px;
			">Dismiss</button>
		`;

		document.body.appendChild(warning);

		// Auto-dismiss after 8 seconds
		setTimeout(() => {
			if (warning.parentElement) {
				warning.remove();
			}
		}, 8000);
	}
})();
