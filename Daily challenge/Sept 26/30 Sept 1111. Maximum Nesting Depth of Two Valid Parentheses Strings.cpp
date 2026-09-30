class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        int a=0,n=seq.size();
        vector<int>ans(n);
        for(int i=0;i<n;i++){
            if(seq[i]=='('){
                a++;
                ans[i]=(a%2);
            }else{
                ans[i]=(a%2);
                a--;
            }
        }
        return ans;
    }
};
