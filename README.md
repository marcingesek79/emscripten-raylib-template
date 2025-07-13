# emscripten-raylib-template
Template for a CMake + Raylib + Emscripten + CPP project.

# Prerequisites
Install emscripten (https://emscripten.org/docs/getting_started/downloads.html)

Install CMake 3.25 or newer

# How to build?

```
cmake -S . -B build -DCMAKE_TOOLCHAIN_FILE=<YOUR PATH HERE>/emsdk/upstream/emscripten/cmake/Modules/Platform/Emscripten.cmake -DPLATFORM=Web
cmake --build build
```
It will generate .js and .wasm files in /page/ directory. They are named after CMAKE_PROJECT_NAME variable.


Change /page/index.html to use created .js file
```
<script async type="text/javascript" src="<your_file>.js"></script>
```

Create a server to see the result

```
python3 -m http.server 8000 --directory page
```
... and then enter localhost:8000 in the web browser


You can omit build flags in the first step to compile it for the desktop.
