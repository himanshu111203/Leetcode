class Solution {
public:
    char processStr(string s, long long k) {
        int n=s.size();
        vector<long long>len(n+1,0);
        const long long limit=1e18;
        for(int i=0;i<n;i++){
            len[i+1]=len[i];
            if(s[i]=='*'){
                if(len[i+1]>0)
                len[i+1]--;
            }else if(s[i]=='#'){
                len[i+1]=min(limit,len[i]*2);
            }else if(s[i]=='%'){
                //No change in length
            }else{
                len[i+1]=min(limit,len[i]+1);
            }
        }
        if(len[n]<=k)
        return '.';
        for(int i=n-1;i>=0;i--){
            if(s[i]>='a' && s[i]<='z'){
                if(len[i]==k)
                return s[i];
            }
            else if(s[i]=='#'){
                long long L=len[i];
                if(L>0)
                k%=L;
            }
            else if(s[i]=='%'){
                long long L=len[i];
                if(L>0)
                k=L-1-k;
            }
            else if(s[i]=='*') {
                // surviving positions stay unchanged.
            }
        }
        return '.';
    }
};
