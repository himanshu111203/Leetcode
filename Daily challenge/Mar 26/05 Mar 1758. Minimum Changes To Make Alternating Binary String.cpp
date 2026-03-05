class Solution {
public:
    int solve(int a,string s){
        int c=0;
        for(int i=0;i<s.size();i++){
            if(i%2){
                if(a!=(s[i]-'0'))
                c++;
            }
            else{
                if(a==(s[i]-'0'))
                c++;
            }
        }
        return c;
    }
    int minOperations(string s) {
        return min(solve(0,s),solve(1,s));
    }
};
