cmake_minimum_required(VERSION 3.15)
project(NRE_Tester)

set(CMAKE_CXX_STANDARD 17)
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pedantic -Wno-virtual-move-assign -Wall -Wextra -Wfatal-errors -Wfloat-equal -Wstrict-overflow -Wshadow -Wconversion -Wunreachable-code -Wuninitialized -Winit-self -Werror -fstrict-overflow -O3 -std=c++17")

include_directories(src/Header)
include_directories(src/Tester/InternalTest)
include_directories(src/Tester/TestSuite)

set(COMPILE_LIST
        src/Header/NRE_Tester.hpp
        src/Tester/InternalTest/NRE_InternalTest.cpp
        src/Tester/InternalTest/NRE_InternalTest.hpp
        src/Tester/TestSuite/NRE_TestSuite.cpp
        src/Tester/TestSuite/NRE_TestSuite.hpp)

set(EXEC_LIST
        src/NRE_Main.cpp
        ${COMPILE_LIST})

add_executable(NRE_Tester ${EXEC_LIST})

add_library(NRE-Tester ${COMPILE_LIST})
