/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {
        unordered_map<int,TreeNode*>m;
        unordered_set<int>child;
        int n=descriptions.size();
        for(int i=0;i<n;i++){
            int p=descriptions[i][0],c=descriptions[i][1],l=descriptions[i][2];
            if(!m.count(p))
            m[p]=new TreeNode(p);
            if(!m.count(c))
            m[c]=new TreeNode(c);
            if(l==1)
            m[p]->left=m[c];
            else
            m[p]->right=m[c];
            child.insert(c);
        }
        for(int i=0;i<n;i++){
            int p=descriptions[i][0];
            if(!child.count(p)){
                return m[p];
            }
        }
        return NULL;
    }
};
