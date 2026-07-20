class Solution {
public:
    void solve(vector<vector<int>>&grid){
        int n=grid.size(),m=grid[0].size();
        int x=grid[n-1][m-1];
        int a;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                a=grid[i][j];
                grid[i][j]=x;
                x=a;
            }
        }
        return;
    }
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        for(int i=0;i<k;i++){
            solve(grid);
        }
        return grid;
    }
};
