class Solution {
public:
    int findMin(vector<int>& nums) {
        int start=0,end=nums.size()-1,mid,ans;
        if(nums[0]<=nums[end])
        return nums[0];
        while(start<=end){
            mid=start+(end-start)/2;
            if(nums[mid]<nums[0]){
                ans=nums[mid];
                end=mid-1;
            }else
            start=mid+1;
        }
        return ans;
    }
};
