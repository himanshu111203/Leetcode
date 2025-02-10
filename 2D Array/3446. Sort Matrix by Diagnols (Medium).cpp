class Solution {
public:
    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {
        int n=grid.size();
        for(int i=n-2;i>=1;i--){
            vector<int>arr;
            int a=0,b=i;
            while(b<n){
                arr.push_back(grid[a++][b++]);
            }
            sort(arr.begin(),arr.end());
            a=0,b=i;
            for(int j=0;j<arr.size();j++)
            grid[a++][b++]=arr[j];
        }
        for(int i=0;i<n;i++){
            vector<int>arr;
            int a=i,b=0;
            while(a<n){
                arr.push_back(grid[a++][b++]);
            }
            sort(arr.rbegin(),arr.rend());
            a=i,b=0;
            for(int j=0;j<arr.size();j++)
            grid[a++][b++]=arr[j];
        }
        return grid;
    }
};
