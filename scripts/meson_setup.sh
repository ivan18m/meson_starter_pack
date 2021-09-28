#!/bin/sh
cd ../
meson setup build --buildtype=release --optimization=3 --native-file ./meson.ini
# meson setup build/debug --buildtype=debug
