#!/bin/bash

cd build
[[ "$PWD" =~ build ]] && echo "Create dependency graph... " && dot -Tpng FileIoHandlerDependencyGraph.dot -o FileIoHandlerDependencyGraph.png