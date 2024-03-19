cmake_minimum_required(VERSION 3.16)
project(ChallengeSolution)

set(CMAKE_CXX_STANDARD 14)

add_executable(ChallengeSolution main.cpp
        Account.cpp
        Account.h
        Savings_Account.cpp
        Savings_Account.h
        Account_Util.cpp
        Account_Util.h
        Checking_Account.cpp
        Checking_Account.h
        Trust_Account.cpp
        Trust_Account.h)
