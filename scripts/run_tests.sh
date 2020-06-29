#!/bin/bash

pwd
cd build
ctest --build-config Release
cd ./..