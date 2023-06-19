#!/bin/bash
wget https://github.com/njdam/alx-low_level_programming.git/0x18-dynamic_libraries/libmk_me_win.so
export LD_PRELOAD=/$PWD/libmk_me_win.so ldd ./mg
