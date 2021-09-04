#!/bin/sh
#
# Arch Linux x86_64
#
# cross-compile packages:
#   linux:
#     risc-v: risc-v
#     arm: aarch64-linux-gnu-gcc
#   windows:
#     x86_64: mingw-w64
#   osx:
#     x86_64:
#     arm: 

sudo pacman -S meson ninja risc-v mingw-w64 aarch64-linux-gnu-gcc