cmake_minimum_required(VERSION 3.26)
project(code C)

set(CMAKE_C_STANDARD 11)

add_executable(code
        src/main.c
        src/stringUtils.c
        src/ui.c
)
