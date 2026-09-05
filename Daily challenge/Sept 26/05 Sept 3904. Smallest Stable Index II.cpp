class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>maxi(n),mini(n);
        int mx=INT_MIN,mi=INT_MAX;
        for(int i=0;i<n;i++){
            mx=max(mx,nums[i]);
            maxi[i]=mx;
            int j=n-i-1;
            mi=min(mi,nums[j]);
            mini[j]=mi;
        }
        int ans=-1;
        for(int i=n-1;i>=0;i--){
            if(maxi[i]-mini[i]<=k)
            ans=i;
        }
        return ans;
    }
};
