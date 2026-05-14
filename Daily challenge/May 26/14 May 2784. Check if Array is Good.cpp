class Solution {
public:
    bool isGood(vector<int>& nums) {
        long long sum=0;
        int maxi=INT_MIN;
        int c=0;
        for(int i:nums){
            if(i==maxi) c++;
            maxi=max(i,maxi);
            sum+=i;
        }
        if(nums.size()!=maxi+1 || c!=1)
        return 0;
        if(sum==(maxi*(maxi+1)/2)+maxi)
        return 1;
        return 0;
    }
};
