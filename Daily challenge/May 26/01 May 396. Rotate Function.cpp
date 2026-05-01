class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int a=0,sum=0,n=nums.size();
        for(int i=0;i<n;i++){
            sum+=nums[i];
            a+=(i*nums[i]);
        }
        int ans=a;
        for(int i=0;i<n-1;i++){
            a=a-(sum-nums[i])+(n-1)*nums[i];
            ans=max(ans,a);
        }
        return ans;
    }
};
