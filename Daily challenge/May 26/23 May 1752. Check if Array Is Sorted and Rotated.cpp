class Solution {
public:
    bool check(vector<int>& arr) {
        int n=arr.size(),c=0;
        for(int i=0;i<n;i++){
            if(arr[i]>arr[(i+1)%n])
            c++;
            if(c>1) return 0;
        }
        return 1;
    }
};
