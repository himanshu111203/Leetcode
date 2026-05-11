class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int>ans;
        int ind=0,n=nums.size();
        for(int i=0;i<n;i++){
            while(nums[i]){
                ans.push_back(nums[i]%10);
                nums[i]/=10;
            }
            int a=ind,b=ans.size()-1;
            while(a<b)
            swap(ans[a++],ans[b--]);
            ind=ans.size();
        }
        return ans;
    }
};
