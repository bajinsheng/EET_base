#!/bin/bash

autoreconf -if

if [ -d "build" ]; then
    rm -rf build
fi
mkdir -p build
cd build
../configure
make

