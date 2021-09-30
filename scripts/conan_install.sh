#!/bin/sh
SRC=../
DST=build/conan

cd $SRC
mkdir -p $DST

conan install . -if=$DST --build=missing