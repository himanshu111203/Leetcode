class Solution {
public:
    ListNode* rev(ListNode* curr,ListNode* prev){
        if(!curr)
        return prev;
        ListNode* fut=curr->next;
        curr->next=prev;
        return rev(fut,curr);
    }
    ListNode* doubleIt(ListNode* head) {
        head=rev(head,NULL);
        int carry=0;
        ListNode* temp=head,*prev=NULL;
        while(temp){
            int a=temp->val*2+carry;
            carry=a/10;
            temp->val=a%10;
            prev=temp;
            temp=temp->next;
        }
        if(carry){
            prev->next=new ListNode(carry);
        }
        return rev(head,NULL);
    }
};
