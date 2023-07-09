class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
       
       ListNode* slow = head;
       ListNode* fast = head;
       ListNode* enter = head; 
        while(fast!=NULL&&fast->next!=NULL){

            slow=slow->next;
            fast=fast->next->next;
            
            if(slow==fast){
                while(enter!=slow){
                    enter=enter->next;
                    slow=slow->next;
                }
                return slow;
            }

        }
        return NULL;
    }
};
