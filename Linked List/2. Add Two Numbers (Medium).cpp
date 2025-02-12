class Solution {
public:
    ListNode* reverse(ListNode* curr,ListNode* prev){
        if(!curr)
        return prev;
        ListNode* fut=curr->next;
        curr->next=prev;
        prev=curr;
        return reverse(fut,curr);
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head=new ListNode(0);
        ListNode* temp=head;
        int sum,carry=0;
        while(l1 && l2){
            sum=l1->val+l2->val+carry;
            temp->next=new ListNode(sum%10);
            carry=sum/10;
            temp=temp->next;
            l1=l1->next;
            l2=l2->next;
        }
        while(l1){
            sum=l1->val+carry;
            temp->next=new ListNode(sum%10);
            carry=sum/10;
            temp=temp->next;
            l1=l1->next;
        }
        while(l2){
            sum=l2->val+carry;
            temp->next=new ListNode(sum%10);
            carry=sum/10;
            temp=temp->next;
            l2=l2->next;
        }
        while(carry){
            temp->next=new ListNode(carry%10);
            carry/=10;
            temp=temp->next;
        }
        return head->next;
    }
};
