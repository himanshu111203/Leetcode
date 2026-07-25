class Solution {
public:
    int maxProduct(int n){
        vector<int>freq(10,0);
        while(n){
            freq[n%10]++;
            n/=10;
        }
        int a,b,c=0,i=9;
        while(i>=0){
            if(freq[i]==0)
            i--;
            else{
                if(c==0){
                    a=i;
                    c++;
                }else if(c==1){
                    b=i;
                    c++;
                }else
                break;
                freq[i]--;
            }
        }
        return a*b;
    }
};
