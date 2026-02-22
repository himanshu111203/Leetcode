class Solution {
public:
    int binaryGap(int n) {
        int ans=0,c=0;
        while(n){
            if(n%2){
                c=1;
                n/=2;
                while(n && n%2!=1){
                    n/=2;
                    c++;
                }
                if(n)
                ans=max(ans,c);
            }
            else
            n/=2;
        }
        return ans;
    }
};
