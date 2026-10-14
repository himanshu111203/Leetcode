class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        string ans="";
        while(num--){
            for(int i=9;i>=0;i--){
                if(sum>=i){
                    ans+=(i+'0');
                    sum-=i;
                    break;
                }
            }
        }
        return (sum==0)?ans:"";
    }
};
