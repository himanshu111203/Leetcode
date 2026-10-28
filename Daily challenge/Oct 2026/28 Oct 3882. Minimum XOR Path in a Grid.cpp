class Solution {
public:
    int m,n;
    int find(vector<vector<int>>& grid,int i,int j,int val,vector<vector<vector<int>>>&dp){
        if(i==m || j==n)
        return INT_MAX;
        int x=val^grid[i][j];
        if(i==m-1 && j==n-1)
        return x;
        if(dp[i][j][val]!=-1)
        return dp[i][j][val];
        return dp[i][j][val]=min(find(grid,i+1,j,x,dp),find(grid,i,j+1,x,dp));
    }
    int minCost(vector<vector<int>>& grid) {
        m=grid.size(),n=grid[0].size();
        vector<vector<vector<int>>> dp(m,vector<vector<int>>(n, vector<int>(1024, -1)));
        return find(grid,0,0,0,dp);
    }
};
