#!/bin/bash

PWD=$(dirname "$0")

if [ -z "$PWD" ]
then
     exit 
fi

rm -rf ${PWD}/{CMakeCache.txt,CMakeFiles,cmake_install.cmake,Makefile,libpalindrome.so}
