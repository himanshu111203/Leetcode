class Solution {
public:
    int missingInteger(vector<int>& nums) {
        vector<bool>occur(2501,0);
        for(int i:nums)
        occur[i]=1;
        int sum=nums[0],i=1,n=nums.size();
        while(i<n && nums[i]==nums[i-1]+1)
        sum+=nums[i++];
        while(occur[sum])
        sum++;
        return sum;
    }
};
