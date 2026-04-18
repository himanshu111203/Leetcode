class Solution {
public:
    int mirrorDistance(int n) {
        int a=n,b=0;
        while(a){
            b=b*10+a%10;
            a/=10;
        }
        return abs(b-n);
    }
};
