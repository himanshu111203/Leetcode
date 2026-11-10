//Top Down
class Solution {
public:
    vector<int>dp;
    int solve(int n,vector<int>&costs){
        if(n==0)
        return 0;
        if(dp[n]!=-1)
        return dp[n];
        int ans=INT_MAX;
        for(int i=1;i<=3 && n-i>=0;i++){
            ans=min(ans,costs[n-1]+i*i+solve(n-i,costs));
        }
        return dp[n]=ans;
    }
    int climbStairs(int n, vector<int>& costs) {
        dp.assign(n+1,-1);
        return solve(n,costs);
    }
};

//Bottom Up
class Solution {
public:
    int climbStairs(int n, vector<int>& costs) {
        vector<int>dp(n+1,0);
        for(int i=1;i<=n;i++){
            int ans=INT_MAX;
            for(int j=1;j<=3 && i-j>=0;j++)
            ans=min(ans,costs[i-1]+j*j+dp[i-j]);
            dp[i]=ans;
        }
        return dp[n];
    }
};
