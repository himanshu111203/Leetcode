class Solution {
public:
    int M=1e9+7;
    int concatenatedBinary(int n) {
        int digit=0;
        long ans=0;
        for(int i=1;i<=n;i++){
            if((i&(i-1))==0)         // 2 ki power wala no h to 1 bit increase hogi jaise 3=11 , 4=100
            digit++;
            ans=((ans<<digit)%M+i)%M;
        }
        return ans;
    }
};
