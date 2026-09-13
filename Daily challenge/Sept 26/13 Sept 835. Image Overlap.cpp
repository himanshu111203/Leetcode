class Solution {
public:
    int maxOverlap(vector<vector<int>>& A, vector<vector<int>>& B) {
        int n=A.size();
        int count=0;
        for(int x_shift=-(n-1);x_shift<n;x_shift++){
            for(int y_shift=-(n-1);y_shift<n;y_shift++){
                int temp=0;
                for(int i=0;i<n;i++){
                    for(int j=0;j<n;j++){
                        int ni=i-y_shift,nj=j-x_shift;
                        if(ni>=0 && ni<n && nj>=0 && nj<n && A[i][j]==1 && B[ni][nj]==1)
                        temp++;
                    }
                }
                count=max(count, temp);
            }
        }
        return count;
    }
    int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) {
        return max(maxOverlap(img1,img2),maxOverlap(img2,img1));
    }
};
