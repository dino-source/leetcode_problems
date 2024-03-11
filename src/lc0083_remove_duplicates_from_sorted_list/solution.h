#ifndef LC83_REMOVE_DUPLICATES_FROM_SORTED_LIST_H
#define LC83_REMOVE_DUPLICATES_FROM_SORTED_LIST_H

// include here all necessary headers


// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* deleteDuplicates(ListNode *head);
};

#endif // LC83_REMOVE_DUPLICATES_FROM_SORTED_LIST_H