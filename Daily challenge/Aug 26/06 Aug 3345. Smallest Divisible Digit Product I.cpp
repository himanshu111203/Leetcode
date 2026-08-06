class Solution {
public:
    int smallestNumber(int n, int t) {
        while(1){
            int prod=1,a=n;
            while(a){
                prod*=(a%10);
                a/=10;
            }
            if(prod%t==0)
            return n;
            n++;
        }
    }
};
