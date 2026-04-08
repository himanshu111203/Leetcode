class Solution {
public:
    int xorAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int n=nums.size(),q=queries.size();
        for(int i=0;i<q;i++){
            int li=queries[i][0],ri=queries[i][1],ki=queries[i][2],vi=queries[i][3];
            for(int j=li;j<=ri;j+=ki){
                nums[j]=(1LL*nums[j]*vi)%1000000007;
            }
        }
        int ans=nums[0];
        for(int i=1;i<n;i++)
        ans^=nums[i];
        return ans;
    }
};
