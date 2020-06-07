#!/bin/bash

file="./build/bin/testfio"

if [ -x "$file" ]; then
    "$file"
else
    echo "File was not found under the path: ${file}"
fi