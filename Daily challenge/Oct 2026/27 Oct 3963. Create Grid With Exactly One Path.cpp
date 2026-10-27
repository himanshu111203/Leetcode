class Solution {
public:
    vector<string> createGrid(int m, int n) {
        string s(n,'#');
        s[n-1]='.';
        vector<string>ans;
        string a(n,'.');
        ans.push_back(a);
        for(int i=1;i<m;i++)
            ans.push_back(s);
        return ans;
    }
};
