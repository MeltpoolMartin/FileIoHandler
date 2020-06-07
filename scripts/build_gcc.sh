#!/bin/bash

buildDir="./build"

if [ ! -d "$buildDir" ]; then
    echo "Create missing directory: " ${buildDir}
    mkdir -p $buildDir
fi

cd ./build
whoami
echo "conan configuration gets initialized"
conan --version
conan install -s build_type=Release -s compiler=gcc -s compiler.libcxx=libstdc++11 ..
conan profile show default
cmake -G "Unix Makefiles" ..
cmake --build . --verbose