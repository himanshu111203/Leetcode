class Solution {
public:
    bool check(vector<int>freq){
        int common=0;
        for(int i=0;i<26;i++){
            if(freq[i]==0) continue;
            if(common==0)
            common=freq[i];
            else if(common!=freq[i])
            return 0;
        }
        return 1;
    }
    int longestBalanced(string s) {
        int ans=0,n=s.size();
        for(int i=0;i<n;i++){
            vector<int>freq(26,0);
            for(int j=i;j<n;j++){
                freq[s[j]-'a']++;
                if(j-i+1>ans && check(freq))
                ans=j-i+1;
            }
        }
        return ans;
    }
};
