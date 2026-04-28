class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        int n = grid.size();
        int m  = grid[0].size();
        vector<int>ans;
        for(int i =0;i<grid.size();i++){
            for(int j = 0;j<grid[0].size();j++){
                ans.push_back(grid[i][j]);
            }
        }
        sort(ans.begin(),ans.end());
        int first = ans[0];
        int median = ans[ans.size()/2];
        int an = 0;
        for(int  i =0;i<ans.size();i++){
            int a = ans[i] - first;
            if(a%x!=0)
            return -1;
            first = ans[i];
            an+=(abs(median-ans[i])/x);
        }
        return an;
    }
};
