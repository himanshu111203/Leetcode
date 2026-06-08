class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n=nums.size();
        vector<int>ans(n);
        int i=0,l=0,r=n-1;
        while(i<n){
            int j=n-i-1;
            if(nums[i]<pivot)
            ans[l++]=nums[i];
            if(nums[j]>pivot)
            ans[r--]=nums[j];
            i++;
        }
        while(l<=r){
            ans[l++]=pivot;
        }
        return ans;
    }
};
