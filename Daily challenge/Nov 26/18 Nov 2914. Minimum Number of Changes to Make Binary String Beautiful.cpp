class Solution {
public:
    int minChanges(string s) {
        int n=s.size();
        int c=0;
        for(int i=0;i<n;i+=2)
        c+=(s[i]!=s[i+1]);
        return c;
    }
};
