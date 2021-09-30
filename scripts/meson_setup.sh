#!/bin/sh
cd ../
meson setup build --wipe --optimization=3 --native-file ./meson.ini
# meson setup build/debug --buildtype=debug --native-file ./meson.ini
