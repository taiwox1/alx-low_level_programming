#!/bin/bash
wget -P /tmp/ https://github.com/taiwox1/alx-low_level_programming/blob/master/0x18-dynamic_libraries/randnum.so
export LD_PRELOAD="$PWD/../libgiga.so"
