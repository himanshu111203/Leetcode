class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n=nums.size();
        int maxi=INT_MIN,i1=-1,mini=INT_MAX,i2=-1;
        for(int i=0;i<n;i++){
            if(maxi<nums[i]){
                maxi=nums[i];
                i1=i;
            }
            if(mini>nums[i]){
                mini=nums[i];
                i2=i;
            }
        }
        return min({max(i1+1,i2+1),max((n-i1),(n-i2)),(n-i1)+i2+1,i1+1+(n-i2)});
    }
};
