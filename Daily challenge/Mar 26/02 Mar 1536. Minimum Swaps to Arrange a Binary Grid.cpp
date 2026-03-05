class Solution {
public:
    int minSwaps(vector<vector<int>>& grid) {
        int n=grid.size();
        vector<int>endzero(n);
        for(int i=0;i<n;i++){
            int c=0,j=n-1;
            while(j>=0 && grid[i][j]==0)
            c++,j--;
            endzero[i]=c;
        }
        int steps=0;
        for(int i=0;i<n;i++){
            int need=n-i-1;
            int j=i;
            while(j<n && endzero[j]<need)
            j++;
            if(j==n)
            return -1;
            while(j>i){
                swap(endzero[j],endzero[j-1]);
                j--;
                steps++;   // or write before while loop steps+=j-i;
            }
        }
        return steps;
    }
};
