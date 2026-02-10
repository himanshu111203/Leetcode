class Solution {
public:
    int longestBalanced(vector<int>& nums) {
        int ans=0,n=nums.size();
        for(int i=0;i<n;i++){
            unordered_set<int>even;
            unordered_set<int>odd;
            for(int j=i;j<n;j++){
                if(nums[j]%2)
                odd.insert(nums[j]);
                else
                even.insert(nums[j]);
                if(even.size()==odd.size())
                ans=max(ans,j-i+1);
            }
        }
        return ans;
    }
};
