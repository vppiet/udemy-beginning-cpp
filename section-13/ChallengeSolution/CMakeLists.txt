cmake_minimum_required(VERSION 3.16)
project(ChallengeSolution)

set(CMAKE_CXX_STANDARD 14)

add_executable(ChallengeSolution main.cpp
        Movie.cpp
        Movie.h
        Movies.cpp
        Movies.h)
