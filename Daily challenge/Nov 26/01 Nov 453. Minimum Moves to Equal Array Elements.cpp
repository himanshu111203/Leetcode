class Solution {
public:
    int minMoves(vector<int>& nums) {
        int a=0,m=INT_MAX,n=nums.size();
        for(int i=0;i<n;i++){
            a+=nums[i];
            m=min(m,nums[i]);
        }
        return a-(m*n);
    }
};
