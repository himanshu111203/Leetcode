class Solution {
public:
    vector<vector<int>> constructProductMatrix(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size();
        int size=n*m;
        vector<long long>arr(size),pre(size,1),suf(size,1);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++)
            arr[i*m+j]=grid[i][j];
        }
        for(int i=1;i<size;i++){
            pre[i]=(pre[i-1]*arr[i-1])%12345;
        }
        for(int i=size-2;i>=0;i--){
            suf[i]=(suf[i+1]*arr[i+1])%12345;
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++)
            grid[i][j]=(pre[i*m+j]*suf[i*m+j])%12345;
        }
        return grid;
    }
};
