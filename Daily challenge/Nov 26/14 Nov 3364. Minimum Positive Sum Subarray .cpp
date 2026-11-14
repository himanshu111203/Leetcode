class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int ans=INT_MAX,n=nums.size();
        for(int len=l;len<=r;len++){
            for(int i=0;i<n-len+1;i++){
                int j=i+len-1,sum=0;
                while(i<=j)
                sum+=nums[j--];
                if(sum>0)
                ans=min(ans,sum);
            }
        }
        return (ans==INT_MAX)?-1:ans;
    }
};
