class Solution {
public:
    int maximumLengthSubstring(string s) {
        unordered_map<char,int>m;
        int i=0,n=s.size(),ans=0;
        for(int j=0;j<n;j++){
            m[s[j]]++;
            while(i<=j && m[s[j]]>2){
                m[s[i]]--;
                i++;
            }
            ans=max(ans,j-i+1);
        }
        return ans;
    }
};
