class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        int i=0,n=nums.size(),ans=0;
        for(int j=0;j<n;j++){
            m[nums[j]]++;
            while(i<=j && m[nums[j]]>k){
                m[nums[i]]--;
                i++;
            }
            ans=max(ans,j-i+1);
        }
        return ans;
    }
};
