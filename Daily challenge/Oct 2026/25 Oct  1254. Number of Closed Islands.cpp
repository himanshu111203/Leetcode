class Solution {
public:
    int n,m;
    int row[4]={0,0,1,-1};
    int col[4]={1,-1,0,0};
    bool valid(int i,int j){
        return i>=0 && i<n && j>=0 && j<m;
    }
    void dfs(vector<vector<int>>&grid,int i,int j){
        grid[i][j]=1;
        for(int k=0;k<4;k++){
            int ni=i+row[k],nj=j+col[k];
            if(valid(ni,nj) && grid[ni][nj]==0)
            dfs(grid,ni,nj);
        }
    }
    int closedIsland(vector<vector<int>>& grid) {
        n=grid.size(),m=grid[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i==0 || i==n-1 || j==0 || j==m-1){
                    if(grid[i][j]==0)
                    dfs(grid,i,j);
                }
            }
        }
        int ans=0;
        for(int i=1;i<n-1;i++){
            for(int j=1;j<m-1;j++){
                if(grid[i][j]==0){
                    dfs(grid,i,j);
                    ans++;
                }
            }
        }
        return ans;
    }
};
