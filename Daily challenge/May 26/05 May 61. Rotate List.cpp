/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        int n=0;
        ListNode *temp=head,*fut;
        while(temp){
            n++;
            if(!temp->next)
            fut=temp;
            temp=temp->next;
        }
        if(!n)
        return head;
        k=k%n;
        if(!k)
        return head;
        temp=head;
        k=n-k;
        ListNode *prev=NULL;
        while(k--){
            prev=temp;
            temp=temp->next;
        }
        prev->next=NULL;
        fut->next=head;
        return temp;
    }
};
