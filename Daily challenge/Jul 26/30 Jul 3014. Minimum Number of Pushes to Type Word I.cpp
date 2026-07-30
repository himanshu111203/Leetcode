class Solution {
public:
    int minimumPushes(string word) {
        int n=word.size(),a=1,ans=0;
        while(n){
            if(n>8){
                ans+=(8*a);
                n-=8;
            }else{
                ans+=(n*a);
                n=0;
            }
            a++;
        }
        return ans;
    }
};
