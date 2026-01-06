class Solution {
public:
    int maxLevelSum(TreeNode* root) {                  //Use bfs
        int sum=INT_MIN,level=1,ans;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            int a=0;
            for(int i=0;i<n;i++){
                TreeNode *temp=q.front();
                q.pop();
                a+=temp->val;
                if(temp->left)
                q.push(temp->left);
                if(temp->right)
                q.push(temp->right);
            }
            if(a>sum){
                sum=a;
                ans=level;
            }
            level++;
        }
        return ans;
    }
};
