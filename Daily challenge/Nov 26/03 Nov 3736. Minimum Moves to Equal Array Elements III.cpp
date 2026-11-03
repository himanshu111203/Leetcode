class Solution {
public:
    int minMoves(vector<int>& nums) {
        int maxi=*max_element(nums.begin(),nums.end()),ans=0;
        for(int i:nums)
        ans+=(maxi-i);
        return ans;
    }
};
