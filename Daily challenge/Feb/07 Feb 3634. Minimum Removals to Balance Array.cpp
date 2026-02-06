class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int i=0,j=0,n=nums.size(),mini,maxi,ans=0;
        while(j<n){
            mini=nums[i],maxi=nums[j];
            while(i<j && maxi>1ll*k*mini){
                i++;
                mini=nums[i];
            }
            ans=max(ans,j-i+1);
            j++;
        }
        return n-ans;
    }
};
