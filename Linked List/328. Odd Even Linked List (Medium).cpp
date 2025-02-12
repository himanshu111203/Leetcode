class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(!head || !head->next)
        return head;
        ListNode *odd=head,*even=head->next,*temp=head->next;
        while(even && even->next){
            odd->next=odd->next->next;
            even->next=even->next->next;
            odd=odd->next;
            even=even->next;
        }
        odd->next=temp;
        return head;
    }
};
