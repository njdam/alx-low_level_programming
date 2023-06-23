#!/bin/bash
export LD_PRELOAD=./libmyrand.so
./gm 9 8 10 24 75 9
