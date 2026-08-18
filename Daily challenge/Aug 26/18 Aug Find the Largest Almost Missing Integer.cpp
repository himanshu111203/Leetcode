class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int maxi=*max_element(nums.begin(),nums.end());
        int n=nums.size();
        unordered_map<int,int>m;
        for(int i:nums)
        m[i]++;
        if(k==n)
        return maxi;
        if(k==1){
            int maxele=-1;
            for(int i:nums){
                if(m[i]==1 && i>maxele)
                maxele=i;
            }
            return maxele;
        }
        if(nums[0]==nums[n-1])
        return -1;
        if(m[nums[0]]==1 && m[nums[n-1]]==1)
        return max(nums[0],nums[n-1]);
        if(m[nums[0]]==1 && m[nums[n-1]]>1)
        return nums[0];
        if(m[nums[0]]>1 && m[nums[n-1]]==1)
        return nums[n-1];
        return -1;
    }
};
