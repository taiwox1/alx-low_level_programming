#!/bin/bash
wget -P .. https://raw.githubusercontent.com/taiwox1/alx-low_level_programming/master/0x18-dynamic_libraries/random.so
export LD_PRELOAD="$PWD/../random.so"

