#!/bin/bash

# Star Wars WebAssembly Build Script
# This script builds the Star Wars C++ conversion for WebAssembly

set -e  # Exit on any error

echo "=== Star Wars WebAssembly Build Script ==="
echo "Building Star Wars C++ conversion for WebAssembly..."

# Check if Emscripten is installed
if ! command -v emcc &> /dev/null; then
    echo "Error: Emscripten not found!"
    echo "Please install Emscripten:"
    echo "  git clone https://github.com/emscripten-core/emsdk.git"
    echo "  cd emsdk"
    echo "  ./emsdk install latest"
    echo "  ./emsdk activate latest"
    echo "  source ./emsdk_env.sh"
    exit 1
fi

# Set up Emscripten environment
echo "Setting up Emscripten environment..."
source ~/emsdk/emsdk_env.sh 2>/dev/null || {
    echo "Warning: Could not source emsdk_env.sh"
    echo "Make sure Emscripten is properly installed and activated"
}

# Create build directory
echo "Creating build directory..."
mkdir -p build_wasm
cd build_wasm

# Clean previous build
echo "Cleaning previous build..."
rm -rf *

# Configure with Emscripten
echo "Configuring with Emscripten..."
emcmake cmake .. -DCMAKE_BUILD_TYPE=Release -f ../CMakeLists_wasm.txt

# Build
echo "Building WebAssembly module..."
emmake make -j$(nproc)

# Check if build was successful
if [ ! -f "starwars.js" ] || [ ! -f "starwars.wasm" ]; then
    echo "Error: Build failed - output files not found"
    exit 1
fi

# Optimize WASM
echo "Optimizing WebAssembly..."
if command -v wasm-opt &> /dev/null; then
    wasm-opt -O3 starwars.wasm -o starwars_optimized.wasm
    mv starwars_optimized.wasm starwars.wasm
    echo "WebAssembly optimized successfully"
else
    echo "Warning: wasm-opt not found, skipping optimization"
fi

# Create deployment package
echo "Creating deployment package..."
cd ..
mkdir -p web_deploy
cd web_deploy

# Copy WASM files
cp ../build_wasm/starwars.js .
cp ../build_wasm/starwars.wasm .

# Copy HTML and assets
cp ../web/index.html . 2>/dev/null || {
    echo "Creating default index.html..."
    cat > index.html << 'EOF'
<!DOCTYPE html>
<html>
<head>
    <title>Star Wars - WebAssembly</title>
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1">
    <style>
        body {
            font-family: Arial, sans-serif;
            background: #000;
            color: #0f0;
            margin: 0;
            padding: 20px;
            text-align: center;
        }
        #gameCanvas {
            border: 2px solid #0f0;
            background: #000;
            margin: 20px auto;
            display: block;
        }
        .controls {
            margin: 20px;
        }
        button {
            background: #0f0;
            color: #000;
            border: none;
            padding: 10px 20px;
            margin: 5px;
            cursor: pointer;
            font-weight: bold;
        }
        button:hover {
            background: #0a0;
        }
        .info {
            font-family: monospace;
            color: #0f0;
            margin: 10px;
        }
        .loading {
            color: #ff0;
        }
    </style>
</head>
<body>
    <h1>⭐ Star Wars - WebAssembly Edition ⭐</h1>
    <div id="loading" class="loading">Loading Star Wars...</div>
    <canvas id="gameCanvas" width="800" height="600" style="display:none;"></canvas>
    <div class="controls" style="display:none;">
        <button id="startBtn">Start Game</button>
        <button id="resetBtn">Reset</button>
        <button id="fullscreenBtn">Fullscreen</button>
        <div class="info">
            <div>Score: <span id="score">0</span></div>
            <div>Shields: <span id="shields">8</span></div>
            <div>Wave: <span id="wave">1</span></div>
            <div>Lives: <span id="lives">3</span></div>
        </div>
    </div>
    <script src="starwars.js"></script>
    <script>
        // Simple game interface
        let gameModule = null;
        let gameRunning = false;
        
        // Initialize when module loads
        StarWarsWASM().then(module => {
            gameModule = module;
            document.getElementById('loading').style.display = 'none';
            document.getElementById('gameCanvas').style.display = 'block';
            document.querySelector('.controls').style.display = 'block';
            
            // Initialize game
            gameModule.ccall('init_game', null, ['number', 'number'], [800, 600]);
            
            // Set up controls
            document.getElementById('startBtn').onclick = () => {
                if (!gameRunning) {
                    gameRunning = true;
                    gameLoop();
                }
            };
            
            document.getElementById('resetBtn').onclick = () => {
                gameRunning = false;
                gameModule.ccall('init_game', null, ['number', 'number'], [800, 600]);
            };
            
            document.getElementById('fullscreenBtn').onclick = () => {
                const canvas = document.getElementById('gameCanvas');
                if (canvas.requestFullscreen) {
                    canvas.requestFullscreen();
                }
            };
            
            // Input handling
            document.addEventListener('keydown', (e) => {
                gameModule.ccall('handle_key', null, ['number', 'number'], [e.keyCode, 1]);
            });
            
            document.addEventListener('keyup', (e) => {
                gameModule.ccall('handle_key', null, ['number', 'number'], [e.keyCode, 0]);
            });
        });
        
        function gameLoop() {
            if (gameRunning) {
                // Update game
                gameModule.ccall('update_game', null, [], []);
                
                // Render frame
                renderFrame();
                
                // Update UI
                updateUI();
                
                // Continue loop
                requestAnimationFrame(gameLoop);
            }
        }
        
        function renderFrame() {
            const canvas = document.getElementById('gameCanvas');
            const ctx = canvas.getContext('2d');
            
            // Clear canvas
            ctx.fillStyle = '#000';
            ctx.fillRect(0, 0, canvas.width, canvas.height);
            
            // Get vector data
            const vectorCount = gameModule.ccall('get_vector_count', 'number', [], []);
            
            // Render vectors
            for (let i = 0; i < vectorCount; i++) {
                const x = gameModule.ccall('get_vector_x', 'number', ['number'], [i]);
                const y = gameModule.ccall('get_vector_y', 'number', ['number'], [i]);
                const color = gameModule.ccall('get_vector_color', 'number', ['number'], [i]);
                const intensity = gameModule.ccall('get_vector_intensity', 'number', ['number'], [i]);
                
                ctx.strokeStyle = getColor(color, intensity);
                ctx.lineWidth = 2;
                ctx.beginPath();
                ctx.moveTo(x, y);
                ctx.lineTo(x + 1, y + 1);
                ctx.stroke();
            }
        }
        
        function getColor(colorIndex, intensity) {
            const colors = ['#fff', '#f00', '#0f0', '#00f', '#ff0', '#f0f', '#0ff'];
            const baseColor = colors[colorIndex % colors.length];
            const alpha = intensity / 255;
            return baseColor + Math.floor(alpha * 255).toString(16).padStart(2, '0');
        }
        
        function updateUI() {
            document.getElementById('score').textContent = gameModule.ccall('get_score', 'number', [], []);
            document.getElementById('shields').textContent = gameModule.ccall('get_shields', 'number', [], []);
            document.getElementById('wave').textContent = gameModule.ccall('get_wave', 'number', [], []);
            document.getElementById('lives').textContent = gameModule.ccall('get_lives', 'number', [], []);
        }
    </script>
</body>
</html>
EOF
}

# Copy ROMs if they exist
if [ -d "../roms" ]; then
    cp -r ../roms .
    echo "ROMs copied to deployment package"
else
    echo "Warning: ROMs directory not found"
fi

# Create a simple README
cat > README.md << 'EOF'
# Star Wars WebAssembly Edition

This is the Star Wars arcade game converted to run in web browsers using WebAssembly.

## How to Play

1. Open `index.html` in a modern web browser
2. Click "Start Game" to begin
3. Use keyboard controls:
   - Arrow keys: Move
   - Space: Fire
   - Enter: Start game
   - Escape: Pause

## Browser Requirements

- Modern web browser with WebAssembly support
- WebGL support for graphics
- Web Audio API support for sound

## Performance

- Optimized for 60 FPS gameplay
- Hardware-accelerated graphics
- Low-latency audio
- Cross-platform compatibility

## Technical Details

- Built with Emscripten
- C++17 codebase
- WebGL rendering
- Web Audio API sound
- IndexedDB storage

May the Force be with you!
EOF

echo ""
echo "=== Build Complete! ==="
echo "WebAssembly files created in: web_deploy/"
echo "Files:"
echo "  - starwars.js (JavaScript interface)"
echo "  - starwars.wasm (WebAssembly module)"
echo "  - index.html (Game interface)"
echo "  - README.md (Documentation)"
echo ""
echo "To test:"
echo "  1. cd web_deploy"
echo "  2. python3 -m http.server 8000"
echo "  3. Open http://localhost:8000 in your browser"
echo ""
echo "To deploy:"
echo "  - Upload web_deploy/ contents to any web server"
echo "  - Or use GitHub Pages, Netlify, etc."
echo ""
echo "May the Force be with you! ⭐"
