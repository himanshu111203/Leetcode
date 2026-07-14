class Solution {
public:
    const int mod=1e9+7;
    int subsequencePairCount(vector<int>& nums) {
        int maxi=*max_element(nums.begin(),nums.end());
        int n=nums.size();
        vector<vector<int>>dp(maxi+1,vector<int>(maxi+1));
        dp[0][0]=1;
        for(int i=0;i<n;i++){
            vector<vector<int>>ndp(maxi+1,vector<int>(maxi+1));
            for(int s1=0;s1<=maxi;s1++){
                for(int s2=0;s2<=maxi;s2++){
                    int val=dp[s1][s2];
                    if(val==0)
                    continue;
                    int div1=gcd(s1,nums[i]),div2=gcd(s2,nums[i]);
                    ndp[s1][s2]=(ndp[s1][s2]+val)%mod;
                    ndp[div1][s2]=(ndp[div1][s2]+val)%mod;
                    ndp[s1][div2]=(ndp[s1][div2]+val)%mod;
                }
            }
            dp=ndp;
        }
        int ans=0;
        for(int i=1;i<=maxi;i++)
        ans=(ans+dp[i][i])%mod;
        return ans;
    }
};
