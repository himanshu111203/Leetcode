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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        int first=-1,prev=-1;
        int mini=INT_MAX,maxi=-1,a=1;
        ListNode* temp=head->next,*pre=head;
        while(temp->next){
            ListNode *nex=temp->next;
            if((temp->val>nex->val && temp->val>pre->val) || (temp->val<nex->val && temp->val<pre->val)){
                if(first!=-1){
                    mini=min(mini,a-prev);
                    maxi=max(maxi,a-first);
                }
                else
                first=a;
                prev=a;
            }
            a++;
            pre=temp;
            temp=nex;
        }
        if(maxi==-1)
        return {-1,-1};
        return {mini,maxi};
    }
};
