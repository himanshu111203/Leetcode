/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int a=0,b=0;
        ListNode *temp=headA;
        while(temp){
            a++;
            temp=temp->next;
        }
        temp=headB;
        while(temp){
            b++;
            temp=temp->next;
        }
        while(a>b){
            headA=headA->next;
            a--;
        }
        while(b>a){
            headB=headB->next;
            b--;
        }
        while(headA!=headB){
            headA=headA->next;
            headB=headB->next;
        }
        if(!headA)
        return NULL;
        return headA;
    }
};
