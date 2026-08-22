class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0,prod=1;
        int a=n;
        while(a){
            int b=a%10;
            sum+=b;
            prod*=b;
            a/=10;
        }
        sum+=prod;
        return n%sum==0;
    }
};
