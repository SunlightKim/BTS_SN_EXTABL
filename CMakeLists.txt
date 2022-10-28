cmake_minimum_required(VERSION 3.23)
project(BTS_SN_EXTABL C)

set(CMAKE_C_STANDARD 11)

include_directories(inc)

add_executable(BTS_SN_EXTABL
        func/fillarray.c
        inc/const.h
        inc/fillarray.h
        main.c)
