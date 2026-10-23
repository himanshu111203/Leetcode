class Solution {
public:
    int sortPermutation(vector<int>& nums) {
        int ans=-1,n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]!=i){
                ans&=nums[i];
                if(ans==0)
                return 0;
            }
        }
        return max(ans,0);
    }
};
