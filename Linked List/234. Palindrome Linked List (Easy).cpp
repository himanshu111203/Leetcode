class Solution {
public:
    ListNode *rev(ListNode *curr,ListNode *prev){
        if(!curr)
        return prev;
        ListNode *fut=curr->next;
        curr->next=prev;
        return rev(fut,curr);
    }
    bool isPalindrome(ListNode* head) {
        if(!head->next)
        return 1;
        ListNode *slow=head,*fast=head,*prev=NULL;
        while(fast && fast->next){
            prev=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        prev->next=NULL;
        slow=rev(slow,NULL);
        while(head && slow){
            if(head->val!=slow->val)
            return 0;
            head=head->next;
            slow=slow->next;
        }
        return 1;
    }
};
