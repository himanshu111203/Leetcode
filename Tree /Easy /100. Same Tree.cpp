class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(!p && !q)
        return 1;
        if(!p || !q)
        return 0;
        if(p->val==q->val)
        return isSameTree(p->left,q->left) && isSameTree(p->right,q->right);
        return 0;
    }
};
