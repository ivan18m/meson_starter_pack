#!/bin/sh
SRC=../../
BUILD=../../build/arm64

# meson src build --cross-file cross_file.txt
meson $SRC $BUILD --cross-file ./cross-arm64.ini

cd $BUILD
meson compile
