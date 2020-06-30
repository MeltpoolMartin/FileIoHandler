#!/bin/bash

buildDir="./build"

if [ ! -d "$buildDir" ]; then
    echo "Create missing directory: " ${buildDir}
    mkdir -p $buildDir
fi

cd ./build
echo "Configure external packages with conan"
conan install -g cmake_multi -s build_type=Release ..
conan install -g cmake_multi -s build_type=Debug  ..

echo "Configure project with CMake and dependency graph"
cmake -G "Xcode" --graphviz=DependencyGraph/FileIoHandler.dot ..
dot -Tpng DependencyGraph/FileIoHandler.dot -o DependencyGraph/FileIoHandler.png