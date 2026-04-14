class Solution {
public:
    typedef long long ll;
    ll solve(int i,int j,vector<int>& robot,vector<int>&positions,vector<vector<ll>>&dp){
        if(i>=robot.size())
        return 0;
        if(j>=positions.size())
        return 1e12;
        if(dp[i][j]!=-1)
        return dp[i][j];
        ll take=abs(robot[i]-positions[j])+solve(i+1,j+1,robot,positions,dp);
        ll skip=solve(i,j+1,robot,positions,dp);
        return dp[i][j]=min(take,skip);
    }
    long long minimumTotalDistance(vector<int>& robot, vector<vector<int>>& factory) {
        sort(robot.begin(),robot.end());
        sort(factory.begin(),factory.end());
        vector<int>positions;
        for(int i=0;i<factory.size();i++){
            int pos=factory[i][0],limit=factory[i][1];
            for(int j=0;j<limit;j++)
            positions.push_back(pos);
        }
        int m=robot.size(),n=positions.size();
        vector<vector<ll>>dp(m+1,vector<ll>(n+1,-1));
        return solve(0,0,robot,positions,dp);
    }
};
