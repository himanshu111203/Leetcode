class Solution {
public:
    bool checkOnesSegment(string s) {
        int i=0,n=s.size();
        while(s[i]=='1')
        i++;
        if(i==n) return 1;
        while(s[i]=='0')
        i++;
        return i==n;
    }a
};
