cmake_minimum_required(VERSION 3.16)
project(RedefiningBaseClassMethods)

set(CMAKE_CXX_STANDARD 14)

add_executable(RedefiningBaseClassMethods main.cpp
        Account.cpp
        Account.h
        Savings_Account.cpp
        Savings_Account.h)
