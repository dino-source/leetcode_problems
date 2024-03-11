#include "solution.h"


ListNode* Solution::deleteDuplicates(ListNode *head) {
    if (head == nullptr || head->next == nullptr) {
        return head;
    }

    ListNode* currentNode {head};
    ListNode* nextNode {currentNode->next};
    while (nextNode != nullptr) {
        if (currentNode->val == nextNode->val) {
            nextNode = nextNode->next;
            continue;
        }
        currentNode->next = nextNode;
        currentNode = nextNode;
        nextNode = nextNode->next;
    }
    currentNode->next = nullptr;

    return head;
}