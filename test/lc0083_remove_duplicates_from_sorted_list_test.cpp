// Uncomment the next line to enable tests for LeetCode problem 83
#define ENABLE_TESTING_FOR_LEETCODE_PROBLEM_83

#ifdef ENABLE_TESTING_FOR_LEETCODE_PROBLEM_83

#include <gtest/gtest.h>
#include "../src/lc0083_remove_duplicates_from_sorted_list/solution.h"

#include <vector>

TEST(TestTopic, lc83_remove_duplicates_from_sorted_list_test1) {
    ListNode* rear = new ListNode(2);
    ListNode* next = new ListNode(1, rear);
    ListNode* head = new ListNode(1, next);

    Solution sol;
    auto res = sol.deleteDuplicates(head);

    std::vector<int> expected {1, 2};
    decltype(expected.size()) index {0};

    for (ListNode* cur = res; cur != nullptr; cur = cur->next) {
        int actual_result {cur->val};
        int expected_result {expected[index++]};
        EXPECT_EQ(actual_result, expected_result);
    }

    delete rear;
    delete next;
    delete head;
}

TEST(TestTopic, lc83_remove_duplicates_from_sorted_list_test2) {
    ListNode* rear = new ListNode(3);
    ListNode* fourth = new ListNode(3, rear);
    ListNode* third = new ListNode(2, fourth);
    ListNode* second = new ListNode(1, third);
    ListNode* head = new ListNode(1, second);

    Solution sol;
    auto res = sol.deleteDuplicates(head);

    std::vector<int> expected {1, 2, 3};
    decltype(expected.size()) index {0};

    for (ListNode* cur = res; cur != nullptr; cur = cur->next) {
        int actual_result {cur->val};
        int expected_result {expected[index++]};
        EXPECT_EQ(actual_result, expected_result);
    }

    delete rear;
    delete fourth;
    delete third;
    delete second;
    delete head;
}

#endif // ENABLE_TESTING_FOR_LEETCODE_PROBLEM_83
