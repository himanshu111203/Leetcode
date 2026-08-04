class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int x=nums[0];
        vector<int>ans;
        int i=0,n=nums.size();
        while(i<n){
            if(x==nums[i])
            i++;
            else
            ans.push_back(x);
            x++;
        }
        return ans;
    }
};
