cmake_minimum_required(VERSION 3.28)

add_subdirectory(lc0035_search_insert_position)
add_subdirectory(lc0136_single_number)

set(SOURCES
    "lc0035_search_insert_position/solution.h"
    "lc0035_search_insert_position/solution.cpp"
    "lc0136_single_number/solution.h"
    "lc0136_single_number/solution.cpp"
    "main.cpp")
add_executable(app ${SOURCES})
