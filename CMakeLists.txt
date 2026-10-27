cmake_minimum_required(VERSION 3.20)
project(C_lab C)

set(CMAKE_C_STANDARD 11)

# Individual targets for your files inside the basic-codes folder
add_executable(helloworld basic-codes/helloworld.c
)
add_executable(marks basic-codes/marks.c)
