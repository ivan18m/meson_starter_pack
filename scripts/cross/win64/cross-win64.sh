#!/bin/sh
SRC=../../../
BUILD=../../../build/win64
#DLL=/usr/x86_64-w64-mingw32/bin

meson $SRC $BUILD --cross-file ./cross-win64.ini #--wipe

cd $BUILD
meson compile
