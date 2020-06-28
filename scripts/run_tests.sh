#!/bin/bash

file="./build/bin/test/testfio"

if [ -x "$file" ]; then
    "$file"
else
    echo "File was not found under the path: ${file}"
fi