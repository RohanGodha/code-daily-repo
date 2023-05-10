/**
 * Definition for singly-linked list
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) 
    {
    node->val = node->next->val; 
    node->next = node->next->next;
    }
};


// We wanted only the "val" and "next" values to be changed.
// So what we did is we skipped each of them by one.
// node ki value=node ki next ki value
// node ka next = node ke next ka next
