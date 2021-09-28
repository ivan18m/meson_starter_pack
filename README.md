## Meson starter pack
Packages needed to build: meson, ninja, conan  
Usage:
```bash
git clone https://github.com/ivan18m/meson_starter_pack.git
cd meson_starter_pack
```
use conan package manager
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