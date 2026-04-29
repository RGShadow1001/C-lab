cmake_minimum_required(VERSION 3.20)
project(C_lab)

set(CMAKE_CXX_STANDARD 17)

# This automatically finds all your source files
file(GLOB SOURCES *.cpp *.c *.h)

add_executable(C_lab ${SOURCES}
        basic-codes/helloworld.cpp
)
