class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n=nums.size();
        vector<int>left(n,0);
        int l=nums[0];
        for(int i=1;i<n;i++){
            int a=nums[i];
            left[i]=l;
            l+=a;
        }
        l=nums[n-1];
        nums[n-1]=0;
        for(int i=n-2;i>=0;i--){
            int a=nums[i];
            nums[i]=l;
            l+=a;
        }
        for(int i=0;i<n;i++){
            nums[i]=abs(nums[i]-left[i]);
        }
        return nums;
    }
};
