//Top Down
class Solution {
public:
    int n;
    vector<int>dp;
    int solve(int i,vector<int>&arr){
        if(i==n)
        return 0;
        if(dp[i]!=-1)
        return dp[i];
        dp[i]=arr[i]-solve(i+1,arr);
        if(i+1<n)
        dp[i]=max(dp[i],arr[i]+arr[i+1]-solve(i+2,arr));
        if(i+2<n)
        dp[i]=max(dp[i],arr[i]+arr[i+1]+arr[i+2]-solve(i+3,arr));
        return dp[i];
    }
    string stoneGameIII(vector<int>& stoneValue) {
        n=stoneValue.size();
        dp.assign(n+1,-1);
        int ans=solve(0,stoneValue);
        if(ans>0)
        return "Alice";
        if(ans<0)
        return "Bob";
        return "Tie";
    }
};

//Bottom Up
class Solution {
public:
    string stoneGameIII(vector<int>& stoneValue) {
        int n=stoneValue.size();
        vector<int>dp(n+1,0);
        for(int i=n-1;i>=0;i--){
            dp[i]=stoneValue[i]-dp[i+1];
            if(i+1<n)
            dp[i]=max(dp[i],stoneValue[i]+stoneValue[i+1]-dp[i+2]);
            if(i+2<n)
            dp[i]=max(dp[i],stoneValue[i]+stoneValue[i+1]+stoneValue[i+2]-dp[i+3]);
        }
        int ans=dp[0];
        if(ans>0)
        return "Alice";
        if(ans<0)
        return "Bob";
        return "Tie";
    }
};
