#include "solution.h"

#include <algorithm>


bool Solution::isBalanced(TreeNode* root) {
    if (root == nullptr) {
        return true;
    }
    return isBalancedChildren(root) &&
        isBalanced(root->left) &&
        isBalanced((root->right));
}

bool Solution::isBalancedChildren(TreeNode* root) {
    return std::abs(depth(root->left) - depth(root->right)) <= 1;
}

int Solution::depth(TreeNode* root) {
    if (root == nullptr) {
        return 0;
    }

    int leftChildDepth = 1 + depth(root->left);
    int rightChildDepth = 1 + depth(root->right);
    return std::max(leftChildDepth, rightChildDepth);  
}