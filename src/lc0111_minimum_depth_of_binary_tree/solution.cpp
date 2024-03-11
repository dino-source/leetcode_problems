#include "solution.h"

#include <list>

int Solution::minDepth(TreeNode* root) {
    if (root == nullptr) {
        return 0;
    }
    
    int depth {1};
    std::list<TreeNode*> queue;
    queue.push_back(root);

    while (!queue.empty()) {
        auto nodesCount {queue.size()};
        TreeNode* node;
        for (size_t i = 0; i < nodesCount; ++i, ++depth)
        {
            node = queue.front();
            queue.pop_front();
            if (node->left == nullptr && node->right == nullptr) {
                return depth;
            }

            if (node->left != nullptr) {
                queue.push_back(node->left);
            }

            if (node->right != nullptr) {
                queue.push_back(node->right);
            }
        }
        
    }

    return depth;
}