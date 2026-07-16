class Solution {
public:
    int find(int a,int b){
        if(b==0)
        return a;
        return find(b,a%b);
    }
    long long gcdSum(vector<int>& nums) {
        int maxi=nums[0],n=nums.size();
        for(int i=1;i<n;i++){
            maxi=max(maxi,nums[i]);
            nums[i]=find(maxi,nums[i]);
        }
        sort(nums.begin(),nums.end());
        long long ans=0;
        int i=0,j=n-1;
        while(i<j){
            ans+=find(nums[i],nums[j]);
            i++,j--;
        }
        return ans;
    }
};
