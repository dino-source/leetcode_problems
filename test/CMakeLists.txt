cmake_minimum_required(VERSION 3.28)

# Enable C++20 compiler support
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(test_solution "leetcode_problems_test")

# BUILD_TESTING variable is created by include(CTest)
# It is set to ON by default
if (BUILD_TESTING)
    set(SOURCES
        "../src/lc0035_search_insert_position/solution.h"
        "../src/lc0035_search_insert_position/solution.cpp"
        "lc0035_search_insert_position_test.cpp"

        "../src/lc0083_remove_duplicates_from_sorted_list/solution.h"
        "../src/lc0083_remove_duplicates_from_sorted_list/solution.cpp"
        "lc0083_remove_duplicates_from_sorted_list_test.cpp"
        
        "../src/lc0136_single_number/solution.h"
        "../src/lc0136_single_number/solution.cpp"
        "lc0136_single_number_test.cpp")

    add_executable(${test_solution} ${SOURCES})

    target_link_libraries(${test_solution} PRIVATE GTest::gtest_main)

    include(GoogleTest)
    # Finds all the Google tests associated with the executable
    gtest_discover_tests(${test_solution})

    target_include_directories(${test_solution} PUBLIC test src)
endif()
