// Comment the next line to disable tests for LeetCode problem 35
#define ENABLE_TESTING_LEETCODE_PROBLEM_35

#ifdef ENABLE_TESTING_LEETCODE_PROBLEM_35

#include <gtest/gtest.h>
#include "../src/lc0035_search_insert_position/solution.h"


TEST(TestTopic, lc35_search_insert_position_test1) {
    std::vector<int> nums {1, 3, 5, 6};
    int target {5};
    int expected_result {2};
    int actual_result {Solution::searchInsert(nums, target)};

    EXPECT_EQ(actual_result, expected_result);
}

TEST(TestTopic, lc35_search_insert_position_test2) {
    std::vector<int> nums {1, 3, 5, 6};
    int target {2};
    int expected_result {1};
    int actual_result {Solution::searchInsert(nums, target)};

    EXPECT_EQ(actual_result, expected_result);
}

TEST(TestTopic, lc35_search_insert_position_test3) {
    std::vector<int> nums {1, 3, 5, 6};
    int target {7};
    int expected_result {4};
    int actual_result {Solution::searchInsert(nums, target)};

    EXPECT_EQ(actual_result, expected_result);
}

TEST(TestTopic, lc35_search_insert_position_test4) {
    std::vector<int> nums {1};
    int target {1};
    int expected_result {0};
    int actual_result {Solution::searchInsert(nums, target)};

    EXPECT_EQ(actual_result, expected_result);
}

#endif // ENABLE_TESTING_LEETCODE_PROBLEM_35