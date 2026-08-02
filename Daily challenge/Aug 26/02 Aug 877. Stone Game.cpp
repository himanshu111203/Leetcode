class Solution {
public:
    vector<vector<int>>dp;
    int solve(int i,int j,vector<int>&piles){
        if(i>j)
        return 0;
        if(i==j)
        return piles[i];
        if(dp[i][j]!=-1)
        return dp[i][j];
        int take_i=piles[i]+min(solve(i+2,j,piles),solve(i+1,j-1,piles));
        int take_j=piles[j]+min(solve(i+1,j-1,piles),solve(i,j-2,piles));
        return dp[i][j]=max(take_i,take_j);
    }
    bool stoneGame(vector<int>& piles) {
        int n=piles.size();
        dp.assign(n,vector<int>(n,-1));
        int total=accumulate(piles.begin(),piles.end(),0);
        int alice=solve(0,n-1,piles);
        int bob=total-alice;
        return alice>bob;
    }
};

class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        int i=0,j=piles.size()-1;
        int x=0,y=0;
        bool alice=1;
        while(i<=j){
            if(alice){
                if(piles[i]>=piles[j]){
                    x+=piles[i++];
                }else
                x+=piles[j--];
                alice=0;
            }else{
                if(piles[i]<=piles[j]){
                    y+=piles[i++];
                }else
                y+=piles[j--];
                alice=1;
            }
        }
        return x>y;
    }
};

class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        return 1;
    }
};
