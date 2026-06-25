class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
        int n=nums.size(),ans=0;
        for(int i=0;i<n;i++){
            int c=0;
            for(int j=i;j<n;j++){
                if(nums[j]==target)
                c++;
                if(2*c>j-i+1)
                ans++;
            }
        }
        return ans;
    }
};
