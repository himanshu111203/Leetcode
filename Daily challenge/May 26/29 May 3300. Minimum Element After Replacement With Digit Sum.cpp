class Solution {
public:
    int sumd(int n){
        int a=0;
        while(n){
            a+=n%10;
            n/=10;
        }
        return a;
    }
    int minElement(vector<int>& nums) {
        int ans=INT_MAX;
        for(int i:nums)
        ans=min(ans,sumd(i));
        return ans;
    }
};
