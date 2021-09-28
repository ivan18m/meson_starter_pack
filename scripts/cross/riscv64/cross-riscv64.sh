#!/bin/sh
SRC=../../../
BUILD=../../../build/riscv64

# meson src build --cross-file cross_file.txt
meson $SRC $BUILD --cross-file ./cross-riscv64.ini

cd $BUILD
meson compile
