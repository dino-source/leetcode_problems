#ifndef LC131_MINIMUM_DEPTH_OF_BINARY_TREE_H
#define LC131_MINIMUM_DEPTH_OF_BINARY_TREE_H

// include all necessary headers here


// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *l, TreeNode *r) : val(x), left(l), right(r) {}
};

class Solution {
public:
    int minDepth(TreeNode* root);
};

#endif // LC131_MINIMUM_DEPTH_OF_BINARY_TREE_H