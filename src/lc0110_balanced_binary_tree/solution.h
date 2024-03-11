#ifndef LC110_BALANCED_BINARY_TREE_H
#define LC110_BALANCED_BINARY_TREE_H

// include here all necessary headers
#include <memory>

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* l, TreeNode* r) : val(x), left(l), right(r) {}
};


class Solution {
public:
    bool isBalanced(TreeNode* root);
    bool isBalancedChildren(TreeNode* root);
    int depth(TreeNode* root);
};

#endif // LC110_BALANCED_BINARY_TREE_H
