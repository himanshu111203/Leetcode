class Solution {
public:
    vector<vector<int>> reverseSubmatrix(vector<vector<int>>& grid, int x, int y, int k){
        for(int i=0;i<k/2;i++){
            for(int j=y;j<y+k;j++){
                swap(grid[x+i][j],grid[x+k-i-1][j]);
            }
        }
        return grid;
    }
};
