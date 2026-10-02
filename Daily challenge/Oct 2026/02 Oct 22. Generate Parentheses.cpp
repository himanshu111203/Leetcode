class Solution {
public:
    void solve(int i,int n,int l,int r,string s,vector<string>&ans){
        if(l+r==2*n){
            ans.push_back(s);
            return;
        }
        if(l<n)
        solve(i+1,n,l+1,r,s+'(',ans);
        if(r<l)
        solve(i+1,n,l,r+1,s+')',ans);
    }
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        string s="";
        solve(0,n,0,0,s,ans);
        return ans;
    }
};
