#!/bin/sh
cd ../
meson setup build --optimization=3 --native-file ./meson.ini # --wipe
# meson setup build --buildtype=debug --native-file ./meson.ini
