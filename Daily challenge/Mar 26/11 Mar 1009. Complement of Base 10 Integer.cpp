// Approacch one taking reminder and comlement it with xor with 1 and add with 2 respective power(normal use binary to decimal)
class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0)
        return 1;
        int ans=0,mul=1;
        while(n){
            int rem=n%2;
            ans=ans+(rem^1)*mul;
            n/=2;
            mul*=2;
        }
        return ans;
    }
};

// Approach 2 mask no with 11111 to get ans exapmle 5=101 xor with mask 111 ans=010=2 which is complement of 5
class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0)return 1;
        int mask=0;
        int num=n;
        while(num){
           mask<<=1;
           mask|=1;
           num>>=1;
        }
      return mask^n;
    }
};
