class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n);
        for(int i=0;i<n;i++){
            if(nums[i]>=0)
            ans[i]=nums[(nums[i]+i)%n];
            else{
                int k=(i-(abs(nums[i])%n)+n)%n;
                ans[i]=nums[k];
            }
        }
        return ans;
    }
};
