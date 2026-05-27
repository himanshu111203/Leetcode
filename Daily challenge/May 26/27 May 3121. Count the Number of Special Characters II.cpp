class Solution {
public:
    int numberOfSpecialChars(string s) {
        vector<int>lower(26,-1),upper(26,-1);
        for(int i=0;i<s.size();i++){
            if(s[i]>='a' && s[i]<='z')
            lower[s[i]-'a']=i;
            else{
                if(upper[s[i]-'A']==-1)
                upper[s[i]-'A']=i;
            }
        }
        int ans=0;
        for(int i=0;i<26;i++){
            if(upper[i]!=-1 && lower[i]!=-1){
                if(lower[i]<upper[i])
                ans++;
            }
        }
        return ans;
    }
};
