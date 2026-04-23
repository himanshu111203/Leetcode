class Solution {
public:
    vector<long long> distance(vector<int>& nums) {
        int n=nums.size();
        vector<long long>ans(n, 0);
        unordered_map<int,vector<int>>mp;
        for (int i = 0; i < n; i++)
        mp[nums[i]].push_back(i);
        for (auto &it:mp) {
            vector<int>&arr=it.second;
            int k=arr.size();
            if(k==1)
            continue;
            vector<long long>prefix(k, 0);
            prefix[0]=arr[0];
            for(int i=1;i<k;i++)
            prefix[i]=prefix[i-1]+arr[i];
            for(int j=0;j<k;j++){
                long long left=0,right=0;
                if(j>0)
                left=(long long)arr[j]*j-prefix[j-1];
                if(j<k-1)
                right=(prefix[k-1]-prefix[j])-(long long)arr[j]*(k-j-1);
                ans[arr[j]]=left+right;
            }
        }
        return ans;
    }
};
