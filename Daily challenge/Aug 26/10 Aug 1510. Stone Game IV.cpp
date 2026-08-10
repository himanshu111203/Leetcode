//Top Down
class Solution {
public:
    vector<int>dp;
    bool solve(int n){
        if(n==0)
        return 0;
        if(dp[n]!=-1)
        return dp[n];
        for(int k=1;k*k<=n;k++){
            if(!solve(n-(k*k)))
            return dp[n]=1;
        }
        return dp[n]=0;
    }
    bool winnerSquareGame(int n) {
       dp.assign(n+1,-1);
       return solve(n);
    }
};

//Bottom Up
class Solution {
public:
    bool winnerSquareGame(int n) {
        vector<bool>dp(n+1,0);
        for(int i=1;i<n+1;i++){
            for(int k=1;k*k<=i;k++){
                if(dp[i-(k*k)]==0){
                    dp[i]=1;
                    break;
               }
            }
        }
       return dp[n];
    }
};
