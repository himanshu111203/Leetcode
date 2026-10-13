class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        long long ans=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        nums[i]=abs(nums[i]);
        int k=n/2;
        sort(nums.begin(),nums.end());
        int i=0;
        while(k--){
            ans-=nums[i]*nums[i];
            i++;
        }
        while(i<n){
            ans+=nums[i]*nums[i];
            i++;
        }
        return ans;
    }
};
