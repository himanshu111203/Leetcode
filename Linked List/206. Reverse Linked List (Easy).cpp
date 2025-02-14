//Recursive Approach
class Solution {
public:
    ListNode* rev(ListNode* curr,ListNode *prev){
        if(!curr)
        return prev;
        ListNode *fut=curr->next;
        curr->next=prev;
        return rev(fut,curr);
    }
    ListNode* reverseList(ListNode* head) {
        return rev(head,NULL);
    }
};

//Iterative Approach
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *curr=head,*prev=NULL,*fut=NULL;
        while(curr){
            fut=curr->next;
            curr->next=prev;
            prev=curr;
            curr=fut;
        }
        head=prev;
        return head;
    }
};
