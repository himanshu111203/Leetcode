class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int n=nums.size(),i=0;
        if(n<4)
        return 0;
        while(i+1<n && nums[i]<nums[i+1])
        i++;
        if(i==0) return 0;
        int p=i;
        while(i+1<n && nums[i]>nums[i+1])
        i++;
        if(i==p) return 0;
        int q=i;
        while(i+1<n && nums[i]<nums[i+1])
        i++;
        return (i > q) && (i == n - 1);
    }
};
