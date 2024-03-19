cmake_minimum_required(VERSION 3.16)
project(DerivingOurFirstClass)

set(CMAKE_CXX_STANDARD 14)

add_executable(DerivingOurFirstClass main.cpp
        Account.cpp
        Account.h
        SavingsAccount.cpp
        SavingsAccount.h)
