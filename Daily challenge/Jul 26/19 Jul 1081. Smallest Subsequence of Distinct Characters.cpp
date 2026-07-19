class Solution {
public:
    string smallestSubsequence(string s) {
        vector<int>ind(26,0);
        int n=s.size();
        for(int i=0;i<n;i++){
            ind[s[i]-'a']=i;
        }
        vector<bool>seen(26,0);
        string ans="";
        for(int i=0;i<n;i++){
            char ch=s[i];
            if(seen[ch-'a'])
            continue;
            while(ans.size()>0 && ans.back()>ch && ind[ans.back()-'a']>i){
                seen[ans.back()-'a']=0;
                ans.pop_back();
            } 
            ans+=ch;
            seen[ch-'a']=1;
        }
        return ans;
    }
};
