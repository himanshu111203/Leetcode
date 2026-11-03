class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n=nums.size(),a=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n/2;i++)
        a+=nums[n-1-i]-nums[i];
        return a;
    }
};
