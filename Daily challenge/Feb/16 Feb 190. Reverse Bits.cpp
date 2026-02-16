class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        int num = 0;
        for(int i=0;i<32;i++){
            if(n&1){
                int t=1;
                num+=t<<31-i;
            }
            n >>= 1;
        }
        return num;
    }
};
