// ans||(ans+1)=nums

//   3=011
//   4=100
//     ||
//   7=111        7-2^2=3(ans)

//   9 = 1001
//   10= 1010 
//      ||
//   11= 1011    11-2^1=9
// number ko binary me krlo right se dekhna start kro jaise hi pehla zero mil jae ya
// wo number hi end ho jae to usse 1 kam wha tak count rkho aur nums[i]-2^count-1 krdo ans aajaega
class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n,-1);
        for(int i=0;i<nums.size();i++){
            if(nums[i]==2)
            continue;
            int c=1;
            int b=nums[i];
            int a=b%2;
            b/=2;
            while(b && a!=0){
                a=b%2;
                b/=2;
                c++;
            }
            if(b)
            ans[i]=nums[i]-pow(2,c-2);
            else
            ans[i]=nums[i]-pow(2,c-1);
        }
        return ans;
    }
};
