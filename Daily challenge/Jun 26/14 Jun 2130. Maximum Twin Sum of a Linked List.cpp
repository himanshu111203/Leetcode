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
    ListNode* rev(ListNode *curr,ListNode* prev){
        if(!curr)
        return prev;
        ListNode *fut=curr->next;
        curr->next=prev;
        return rev(fut,curr);
    }
    int pairSum(ListNode* head) {
        ListNode *slow=head,*fast=head,*pre=NULL;
        while(fast && fast->next){
            pre=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        pre->next=NULL;
        slow=rev(slow,NULL);
        int ans=INT_MIN;
        while(head){
            ans=max(ans,head->val+slow->val);
            head=head->next;
            slow=slow->next;
        }
        return ans;
    }
};
