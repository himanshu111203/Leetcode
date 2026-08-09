class Solution {
public:
    int n;
    vector<vector<vector<int>>>dp;
    int solve(int person,int i,int m,vector<int>&piles){
        if(i>=n)
        return 0;
        if(dp[person][i][m]!=-1)
        return dp[person][i][m];
        int result=(person==1)?-1:INT_MAX;
        int stones=0;
        for(int x=1;x<=min(2*m,n-i);x++){
            stones+=piles[i+x-1];
            if(person==1)
            result=max(result,stones+solve(0,i+x,max(m,x),piles));
            else
            result=min(result,solve(1,i+x,max(m,x),piles));
        }
        return dp[person][i][m]=result;
    }
    int stoneGameII(vector<int>& piles) {
        n=piles.size();
        dp.assign(2,vector<vector<int>>(n+1,vector<int>(n+1,-1)));
        return solve(1,0,1,piles);
    }
};
