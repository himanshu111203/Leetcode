class Solution {
public:
    bool canPartitionGrid(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size();
        vector<long long>rsum(m,0),csum(n,0);
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                rsum[i]+=grid[i][j];
                csum[j]+=grid[i][j];
            }
        }
        long long sum=0;
        for(int i=0;i<m;i++){
            rsum[i]+=sum;
            sum=rsum[i];
        }
        sum=0;
        for(int i=0;i<n;i++){
            csum[i]+=sum;
            sum=csum[i];
        }
        for(int i=m-2;i>=0;i--){
            if(rsum[i]==(rsum[m-1]-rsum[i]))
            return 1;
        }
        for(int i=n-2;i>=0;i--){
            if(csum[i]==(csum[n-1]-csum[i]))
            return 1;
        }
        return 0;
    }
};
