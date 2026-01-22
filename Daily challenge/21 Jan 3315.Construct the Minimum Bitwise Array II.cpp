// explanation in 3314
class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n);
        for(int i=0;i<n;i++){
            if(nums[i]==2){
                ans[i]=-1;
                continue;
            }
            int c=0,b=nums[i];
            int a=b%2;
            b/=2;
            while(b && a!=0){
                a=b%2;
                b/=2;
                c++;
            }
            if(b)
            c--;
            ans[i]=nums[i]-pow(2,c);
        }
        return ans;
    }
};
