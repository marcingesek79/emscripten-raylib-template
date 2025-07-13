# emscripten-raylib-template
Template for a CMake + Raylib + Emscripten + CPP project.

# Prerequisites
1. Install emscripten (https://emscripten.org/docs/getting_started/downloads.html)
2. Install CMake 3.25 or newer

# How to build?

1.
```
cmake -S . -B build -DCMAKE_TOOLCHAIN_FILE=<YOUR PATH HERE>/emsdk/upstream/emscripten/cmake/Modules/Platform/Emscripten.cmake -DPLATFORM=Web
cmake --build build
```
It will generate .js and .wasm files in /page/ directory. They are named after CMAKE_PROJECT_NAME variable.


2. Change /page/index.html src attribute to your .js file
```
<script async type="text/javascript" src="<your_file>.js"></script>
```

3.
```
python3 -m http.server 8000 --directory page
```
... and then enter localhost:8000 in the web browser


