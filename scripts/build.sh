#!/bin/bash

buildDir="./build"

if [ ! -d "$buildDir" ]; then
    echo "Create missing directory: " ${buildDir}
    mkdir -p $buildDir
fi

cd ./build
conan install -s build_type=Release -s compiler=gcc -s compiler.libcxx=libstdc++11 ..
cmake -G "Unix Makefiles" ..
cmake --build . --verbose --config Release