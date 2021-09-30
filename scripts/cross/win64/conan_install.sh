#!/bin/sh
SRC=../../../
DST=build/win64/conan
cd $SRC
mkdir -p $DST

conan install . -if=$DST --build=missing -pr=./scripts/cross/win64/conan-win64.ini
