#!/bin/bash

cd firmware/main
make all PLATFORM=$hw_plat APPDIR=../../particleGeoLoc
cd ../../
