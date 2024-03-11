// Comment the next line to disable tests for LeetCode problem 136
// #define ENABLE_TESTING_LEETCODE_PROBLEM_136

#ifdef ENABLE_TESTING_LEETCODE_PROBLEM_136

#include <gtest/gtest.h>
#include "../src/lc0136_single_number/solution.h"


TEST(TestTopic, lc136_single_number_test1) {
    Solution sol;
    std::vector<int> nums {2, 2, 1};
    int actual_result {sol.singleNumber(nums)};
    int expected_result {1};

    EXPECT_EQ(actual_result, expected_result);
}

TEST(TestTopic, lc136_single_number_test2) {
    Solution sol;
    std::vector<int> nums {4, 1, 2, 2, 1};
    int actual_result {sol.singleNumber(nums)};
    int expected_result {4};

    EXPECT_EQ(actual_result, expected_result);
}

TEST(TestTopic, lc136_single_number_test3) {
    Solution sol;
    std::vector<int> nums {1};
    int actual_result {sol.singleNumber(nums)};
    int expected_result {1};

    EXPECT_EQ(actual_result, expected_result);
}

#endif // ENABLE_TESTING_LEETCODE_PROBLEM_136
