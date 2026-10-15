class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int ans=0,n=nums.size();
        for(int i=0;i<n;i++){
            unordered_set<int>s;
            for(int j=i;j<n;j++){
                s.insert(nums[j]);
                ans+=s.size()*s.size();
            }
        }
        return ans;
    }
};
