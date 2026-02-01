class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int m1=nums[1],m2=INT_MAX;
        for(int i=2;i<nums.size();i++){
            if(nums[i]<=m1){
                m2=m1;
                m1=nums[i];
            }else if(nums[i]<m2)
            m2=nums[i];
        }
        return nums[0]+m1+m2;
    }
};
