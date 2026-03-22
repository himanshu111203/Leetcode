class Solution {
public:
    void rotate(vector<vector<int>>& mat){
        int n=mat.size();
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++)
            swap(mat[i][j],mat[j][i]);
        }
        for(int i=0;i<n;i++){
            int a=0,b=n-1;
            while(a<b)
            swap(mat[i][a++],mat[i][b--]);
        }
        return;
    }
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        if(mat==target)
        return 1;
        int n=3;
        while(n--){
            rotate(mat);
            if(mat==target)
            return 1;
        }
        return 0;
    }
};
