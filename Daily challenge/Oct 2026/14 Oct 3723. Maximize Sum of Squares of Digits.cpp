class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        string ans="";
        while(num--){
            int i=(sum>=9)?9:sum;
            ans+=(i+'0');
            sum-=i;
        }
        return (sum==0)?ans:"";
    }
};
