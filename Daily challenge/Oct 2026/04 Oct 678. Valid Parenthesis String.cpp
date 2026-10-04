class Solution {
public:
    bool checkValidString(string s) {
        int open=0,close=0,n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]=='(' || s[i]=='*')
            open++;
            else
            open--;
            if(s[n-i-1]==')' || s[n-i-1]=='*')
            close++;
            else
            close--;
            if(open<0 || close<0)
            return 0;
        }
        return 1;
    }
};
