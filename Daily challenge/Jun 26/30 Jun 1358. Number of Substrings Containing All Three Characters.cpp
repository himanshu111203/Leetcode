class Solution {
public:
    int numberOfSubstrings(string s) {
        int n=s.size(),i=0;
        vector<int>freq(3,0);
        int c=0,ans=0;
        for(int j=0;j<n;j++){
            freq[s[j]-'a']++;
            if(freq[s[j]-'a']==1)
            c++;
            if(c==3)
            ans+=n-j;
            while(i<=j && c>2){
                freq[s[i]-'a']--;
                if(freq[s[i]-'a']==0)
                c--;
                else
                ans+=n-j;
                i++;
            }
        }
        return ans;
    }
};
