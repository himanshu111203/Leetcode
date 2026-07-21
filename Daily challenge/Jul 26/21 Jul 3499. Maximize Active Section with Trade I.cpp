class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        int ones=0;
        for(char c:s){
            if(c=='1')
            ones++;
        }
        s="1"+s+"1";
        int i=0,n=s.size(),ans=ones;
        while(i<n && s[i]=='1')
        i++;
        int c10=0;
        while(i<n && s[i]=='0')
        i++,c10++;
        while(i<n){
            int c11=0;
            while(i<n && s[i]=='1')
            i++,c11++;

            if(c11==0)
            break;

            int c20=0;
            while(i<n && s[i]=='0')
            c20++,i++;

            if(c20==0)
            break;

            ans=max(ans,ones+c10+c20);
            c10=c20; 
        }
        return ans;
    }
};
