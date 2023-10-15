cmake_minimum_required(VERSION 3.26)
project(L3 C)

set(CMAKE_C_STANDARD 23)

include_directories(SYSTEM ./src)

add_executable(L3
        src/main.c
        src/linkedList.c
        src/book.c
)

