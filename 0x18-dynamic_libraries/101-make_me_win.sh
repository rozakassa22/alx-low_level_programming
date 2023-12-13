#!/bin/bash
wget -P .. https://raw.githubusercontent.com/rozakassa22/alx-low_level_programming/master/0x18-dynamic_libraries/libmoke.so
export LD_PRELOAD="$PWD/../libmoke.so"
