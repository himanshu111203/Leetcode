class Solution {
public:
    ListNode* rev(ListNode* curr,ListNode* prev){
        if(!curr)
        return prev;
        ListNode* fut=curr->next;
        curr->next=prev;
        return rev(fut,curr);
    }
    ListNode* removeNodes(ListNode* head) {
        if(!head->next)
        return head;
        head=rev(head,NULL);
        ListNode* temp=head;
        stack<int>s;
        s.push(temp->val);
        temp=temp->next;
        while(temp){
            if(temp->val>=s.top()){
                s.push(temp->val);
            }
            temp=temp->next;
        }
        temp=head;
        while(!s.empty()){
            temp->val=s.top();
            s.pop();
            if(!s.empty())
            temp=temp->next;
            else 
            temp->next=NULL;
        }
        return head;
    }
};
