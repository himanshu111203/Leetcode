class Solution {
public:
    vector<vector<int>>dp;
    int solve(int start,int end,vector<int>&nums){
        if(start==end)
        return nums[start];
        if(dp[start][end]!=INT_MIN)
        return dp[start][end];
        int left=nums[start]-solve(start+1,end,nums);
        int right=nums[end]-solve(start,end-1,nums);
        return dp[start][end]=max(left,right);
    }
    bool predictTheWinner(vector<int>& nums) {
        int n=nums.size();
        dp.assign(n,vector<int>(n,INT_MIN));
        return solve(0,n-1,nums)>=0;
    }
};
