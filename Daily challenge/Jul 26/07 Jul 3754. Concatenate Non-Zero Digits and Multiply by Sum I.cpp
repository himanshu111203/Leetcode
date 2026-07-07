class Solution {
public:
    long long sumAndMultiply(int n) {
        long long ans=0,sum=0,a=1;
        while(n){
            int rem=(n%10);
            n/=10;
            if(rem>0){
                ans+=rem*a;
                a*=10;
                sum+=rem;
            }
        }
        return ans*sum;
    }
};
