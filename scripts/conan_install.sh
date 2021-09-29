#!/bin/sh
cd ../
mkdir -p build/conan
cd build/conan

conan install ../.. --build=missing