class Solution {
public:
    ListNode* rev(ListNode* curr,ListNode* prev){
        if(!curr)
        return prev;
        ListNode* fut=curr->next;
        curr->next=prev;
        return rev(fut,curr);
    }
    void reorderList(ListNode* head) {
        if(!head->next)
        return;
        ListNode* slow=head,*fast=head;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode *head1=head,*head2=slow->next;
        slow->next=NULL;
        head2=rev(head2,NULL);
        while(head2){
            ListNode *nex1=head1->next,*nex2=head2->next;
            head1->next=head2;
            head2->next=nex1;
            head1=nex1;
            head2=nex2;
        }
    }
};
