class Solution {
public:
    int reverseDegree(string s) {
        int ans=0,n=s.size();
        for(int i=0;i<n;i++){
            int x=26-(s[i]-'a');
            ans+=(x*(i+1));
        }
        return ans;
    }
};
