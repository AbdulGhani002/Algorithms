cmake_minimum_required(VERSION 3.28)
project(Algorithms)

set(CMAKE_CXX_STANDARD 14)

add_executable(Algorithms
        01-Arrays/1-array.c
        01-Arrays/2-pointer-to-structure.c
        01-Arrays/3-call-by-value-to-structure.c
        01-Arrays/4-call-by-pointer-to-structure.c
        01-Arrays/5-templeate-class.cpp
        02-Sorting/1-insertion-sort.c)
