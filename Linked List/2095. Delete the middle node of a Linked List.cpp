class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(!head->next)
        return NULL;
        ListNode *slow=head,*fast=head,*prev=NULL;
        while(fast && fast->next){
            prev=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        prev->next=slow->next;
        delete slow;
        return head;
    }
};
