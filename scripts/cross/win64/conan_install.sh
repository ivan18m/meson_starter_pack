#!/bin/sh
cd ../../../build/
conan install .. --build=missing

[settings]
os=Windows
arch=x86_64
compiler=gcc
compiler.version=8
compiler.libcxx=libstdc++11
build_type=Release

[env]
CC=/usr/bin/x86_64-w64-mingw32-gcc
CXX=/usr/bin/x86_64-w64-mingw32-g++