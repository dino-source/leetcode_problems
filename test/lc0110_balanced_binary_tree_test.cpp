// Uncomment the next line to enable tests for LeetCode problem 110
#define ENABLE_TESTING_FOR_LEETCODE_PROBLEM_110

#ifdef ENABLE_TESTING_FOR_LEETCODE_PROBLEM_110

#include <gtest/gtest.h>
#include "../src/lc0110_balanced_binary_tree/solution.h"


TEST(TestTopic, lc110_balanced_binary_tree_test1) {
    TreeNode* rightRight = new TreeNode(7);
    TreeNode* rightLeft = new TreeNode(15);
    TreeNode* right = new TreeNode(20, rightLeft, rightRight);
    TreeNode* left = new TreeNode(9);
    TreeNode* root = new TreeNode(3, left, right);

    Solution sol;

    EXPECT_TRUE(sol.isBalanced(root));

    delete rightLeft;
    delete rightRight;
    delete right;
    delete left;
    delete root;
}

TEST(TestTopic, lc110_balanced_binary_tree_test2) {
    TreeNode* leftLeftRight = new TreeNode(4);
    TreeNode* leftLeftLeft = new TreeNode(4);
    TreeNode* leftLeft = new TreeNode(3, leftLeftLeft, leftLeftRight);
    TreeNode* leftRight = new TreeNode(3);
    TreeNode* left = new TreeNode(2, leftLeft, leftRight);
    TreeNode* right = new TreeNode(2);
    TreeNode* root = new TreeNode(1, left, right);

    Solution sol;

    EXPECT_FALSE(sol.isBalanced(root));

    delete leftLeftLeft;
    delete leftLeftRight;
    delete leftLeft;
    delete leftRight;
    delete left;
    delete right;
    delete root;
}

TEST(TestTopic, lc110_balanced_binary_tree_test3) {
    TreeNode* root = new TreeNode(3);

    Solution sol;

    EXPECT_TRUE(sol.isBalanced(root));

    delete root;
}

#endif // ENABLE_TESTING_FOR_LEETCODE_PROBLEM_110
