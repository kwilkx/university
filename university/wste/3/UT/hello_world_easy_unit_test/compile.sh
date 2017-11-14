#!/bin/bash

cd ~/uczelnia/wste/3/ut/hello_world_easy_unit_test || exit 1

rm -rf build || exit 1
mkdir build || exit 1

cd build/ || exit 1
 
 cmake .. || exit 1

 make -j || exit 1


