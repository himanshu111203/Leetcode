class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(!head || !head->next)
        return head;
        ListNode* curr=head,*ans=head->next;
        while(curr && curr->next){
            ListNode* temp=curr->next->next;
            ListNode* second=curr->next;
            second->next=curr;
            curr->next=temp;
            curr=temp;
        }
        return ans;
    }
};
