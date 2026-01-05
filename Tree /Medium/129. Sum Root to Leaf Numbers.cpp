class Solution {
public:
    int sumNumbers(TreeNode* root) {
        int ans=0;
        stack<pair<TreeNode*,int>>s;
        s.push({root,0});
        int a=0;
        while(!s.empty()){
            TreeNode* temp=s.top().first;
            int a=s.top().second;
            s.pop();
            a=a*10+temp->val;
            if(!temp->left && !temp->right){
                ans+=a;
            }
            if(temp->left)
            s.push({temp->left,a});
            if(temp->right)
            s.push({temp->right,a});
        }
        return ans;
    }
};
