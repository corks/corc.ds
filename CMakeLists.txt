cmake_minimum_required(VERSION 2.8.8)
project(libcaerus C)

set(CMAKE_BUILD_TYPE Debug)

if (CMAKE_COMPILER_IS_GNUCC)
    set(CMAKE_C_FLAGS_DEBUG "-ansi -g -pedantic -Wall -Werror -Wextra")
    set(CMAKE_C_FLAGS_RELEASE "-ansi -O2")
endif (CMAKE_COMPILER_IS_GNUCC)

add_subdirectory(src)
