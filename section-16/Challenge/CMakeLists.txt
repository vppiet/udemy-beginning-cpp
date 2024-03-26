cmake_minimum_required(VERSION 3.16)
project(Challenge)

set(CMAKE_CXX_STANDARD 14)

add_executable(Challenge main.cpp
        Account.cpp
        Account.h
        Account_Util.cpp
        Account_Util.h
        Checking_Account.cpp
        Checking_Account.h
        Savings_Account.cpp
        Savings_Account.h
        Trust_Account.cpp
        Trust_Account.h
        I_Printable.cpp
        I_Printable.h)
