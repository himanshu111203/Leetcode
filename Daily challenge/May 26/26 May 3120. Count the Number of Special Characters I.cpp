class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<bool>lower(26,0),upper(26,0);
        for(char i:word){
            if(i>='a' && i<='z')
            lower[i-'a']=1;
            else
            upper[i-'A']=1;
        }
        int ans=0;
        for(int i=0;i<26;i++){
            if(upper[i] && lower[i])
            ans++;
        }
        return ans;
    }
};
