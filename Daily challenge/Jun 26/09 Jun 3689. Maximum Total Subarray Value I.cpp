class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        long long mini=LLONG_MAX,maxi=LLONG_MIN;
        for(int i:nums){
            if(mini>i)
            mini=i;
            if(maxi<i)
            maxi=i;
        }
        return (maxi-mini)*k;
    }
};
