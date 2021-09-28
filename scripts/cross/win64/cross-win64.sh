#!/bin/sh
SRC=../../../
BUILD=../../../build/win64
#DLL=/usr/x86_64-w64-mingw32/bin

# meson src build --cross-file cross_file.txt
meson $SRC $BUILD --cross-file ./cross-win64.ini

#cp $DLL/*.dll $BUILD/

cd $BUILD
meson compile
