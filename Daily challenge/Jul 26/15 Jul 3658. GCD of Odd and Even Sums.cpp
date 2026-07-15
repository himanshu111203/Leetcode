class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        return n;                    // gcd(n*n,n*(n+1))=n*gcd(n,n+1)=n*1=n    //gcd(n,n+1)=1
    }
};

class Solution {
public:
    int find(int a,int b){
        if(b==0)
        return a;
        return find(b,a%b);
    }
    int gcdOfOddEvenSums(int n) {
        int even=n*(n+1),odd=n*n;
        return find(even,odd);
    }
};
