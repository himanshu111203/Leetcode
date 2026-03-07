class Solution {
public:
    int minFlips(string s) {
        int ans=INT_MAX,n=s.size(),i=0,j=0;
        int flip1=0,flip2=0;
        while(j<2*n){
            char expecteds1=(j%2)?'1':'0';   // string s1=010101 , even ind=0,odd ind=1
            char expecteds2=(j%2)?'0':'1';   // string s1=101010 , even ind=1,odd ind=0
            if(s[j%n]!=expecteds1)
            flip1++;
            if(s[j%n]!=expecteds2)
            flip2++;
            if(j-i+1>n){
                expecteds1=(i%2)?'1':'0';   // string s1=010101 , even ind=0,odd ind=1
                expecteds2=(i%2)?'0':'1';   // string s1=101010 , even ind=1,odd ind=0
                if(s[i%n]!=expecteds1)
                flip1--;
                if(s[i%n]!=expecteds2)
                flip2--;
                i++;
            }
            if(j-i+1==n)
            ans=min({ans,flip1,flip2});
            j++;
        }
        return ans;
    }
};
