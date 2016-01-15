#!/bin/sh
# get file path
cwd=`dirname "${0}"`
expr "${0}" : "/.*" > /dev/null || cwd=`(cd "${cwd}" && pwd)`

g++ ${cwd}/main.cpp -lstdc++ -lpython2.7 -std=c++11 && ${cwd}/a.out

