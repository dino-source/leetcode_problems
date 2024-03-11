// Uncomment the next line to enable tests for LeetCode problem 111
#define ENABLE_TESTING_FOR_LEETCODE_PROBLEM_111

#ifdef ENABLE_TESTING_FOR_LEETCODE_PROBLEM_111

#include <gtest/gtest.h>
#include "../src/lc0111_minimum_depth_of_binary_tree/solution.h"


TEST(TestTopic, lc111_minimum_depth_of_binary_tree_test1) {
    TreeNode* rightRight {new TreeNode(7)};
    TreeNode* rightLeft {new TreeNode(15)};
    TreeNode* right {new TreeNode(20, rightLeft, rightRight)};
    TreeNode* left {new TreeNode(9)};
    TreeNode* root {new TreeNode(3, left, right)};

    Solution sol;

    int expected_result {sol.minDepth(root)};
    int actual_result {2};

    EXPECT_EQ(expected_result, actual_result);

    delete rightLeft;
    delete rightRight;
    delete left;
    delete right;
    delete root;
}

TEST(TestTopic, lc111_minimum_depth_of_binary_tree_test2) {
    TreeNode* root {new TreeNode(2)};
    TreeNode* right1 {new TreeNode(3)};
    TreeNode* right2 {new TreeNode(4)};
    TreeNode* right3 {new TreeNode(5)};
    TreeNode* right4 {new TreeNode(6)};

    root->right = right1;
    right1->right = right2;
    right2->right = right3;
    right3->right = right4;


    Solution sol;

    int expected_result {sol.minDepth(root)};
    int actual_result {5};

    EXPECT_EQ(expected_result, actual_result);

    delete right4;
    delete right3;
    delete right2;
    delete right1;
    delete root;
}

TEST(TestTopic, lc111_minimum_depth_of_binary_tree_test3) {
    TreeNode* root {new TreeNode(1324)};

    Solution sol;

    int expected_result {sol.minDepth(root)};
    int actual_result {1};

    EXPECT_EQ(expected_result, actual_result);

    delete root;
}

TEST(TestTopic, lc111_minimum_depth_of_binary_tree_test4) {
    TreeNode* root {nullptr};

    Solution sol;

    int expected_result {sol.minDepth(root)};
    int actual_result {0};

    EXPECT_EQ(expected_result, actual_result);

    delete root;
}

#endif // ENABLE_TESTING_FOR_LEETCODE_PROBLEM_111
