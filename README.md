## Meson starter pack
Modern C++ project template with: 
* Meson build system
* Conan package manager 
* Libraries set-up:
    * Catch2
    * spdlog
    * nlohmann_json

Packages needed to build: meson, ninja, conan  
### Usage:
```bash
git clone https://github.com/ivan18m/meson_starter_pack.git
cd meson_starter_pack
```
get external libraries with conan
```bash
cd scripts
./conan_install.sh
```
meson and ninja build scripts are in `scripts/` folder 
```bash
./meson_setup.sh
./meson_compile.sh
./meson_test.sh
cd ..
``` 

`scripts/cross/` contains examples for cross-compile to RISC-V and ARM architecture; Windows and macOS(todo) platforms  

TODOs:
* App packaging
* Dynamic link
* macOS (cross) build