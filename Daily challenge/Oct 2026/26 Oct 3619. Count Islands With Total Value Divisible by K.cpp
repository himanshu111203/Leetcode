class Solution {
public:
    int n,m;
    int row[4]={0,0,1,-1};
    int col[4]={1,-1,0,0};
    bool valid(int i,int j){
        return i>=0 && i<n && j>=0 && j<m;
    }
    void dfs(int i,int j,vector<vector<int>>&grid,long long &sum){
        sum+=grid[i][j];
        grid[i][j]=0;
        for(int k=0;k<4;k++){
            int ni=i+row[k],nj=j+col[k];
            if(valid(ni,nj) && grid[ni][nj]!=0)
            dfs(ni,nj,grid,sum);
        }
    }
    int countIslands(vector<vector<int>>& grid, int k) {
        n=grid.size(),m=grid[0].size();
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]!=0){
                    long long sum=0;
                    dfs(i,j,grid,sum);
                    if(sum%k==0)
                    ans++;
                }
            }
        }
        return ans;
    }
};
