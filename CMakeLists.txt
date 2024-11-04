cmake_minimum_required(VERSION 3.27)
project(common_core)

set(CMAKE_CXX_STANDARD 99)

include_directories(libft)

add_executable(common_core
        libft/*c
        libft/libft.h
        libft/Makefile)
