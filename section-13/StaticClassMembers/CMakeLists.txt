cmake_minimum_required(VERSION 3.28)
project(StaticClassMembers)

set(CMAKE_CXX_STANDARD 14)

add_executable(StaticClassMembers main.cpp
        Player.cpp
        Player.h)
