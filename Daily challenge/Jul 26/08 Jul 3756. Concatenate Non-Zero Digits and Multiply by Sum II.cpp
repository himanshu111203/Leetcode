class Solution {
public:
    const int MOD=1e9+7;
    using ll=long long;
    vector<int> sumAndMultiply(string s, vector<vector<int>>& queries) {
        int n=s.size(),m=queries.size();
        vector<int>cnt(n);
        vector<ll> prefNum(n),prefSum(n),pow10(n + 1);
        pow10[0]=1;
        for(int i=1;i<=n;i++)
        pow10[i]=(pow10[i-1]*10)%MOD;
        int c=0;
        ll num=0,sum=0;
        for(int i=0;i<n;i++){
            int d=s[i]-'0';
            if(d!=0){
                c++;
                num=(num*10+d)%MOD;
                sum+=d;
            }
            cnt[i]=c;
            prefNum[i]=num;
            prefSum[i]=sum;
        }
        vector<int>ans(m);
        for (int i=0;i<m;i++) {
            int l=queries[i][0];
            int r=queries[i][1];
            int beforeCnt=(l  ? cnt[l-1] : 0);
            int len=cnt[r]-beforeCnt;
            if(len==0){
                ans[i]=0;
                continue;
            }
            ll beforeNum=(l ? prefNum[l-1] : 0);
            ll x=(prefNum[r]-beforeNum*pow10[len]% MOD+MOD)%MOD;
            ll digitSum=prefSum[r]-(l ? prefSum[l-1] : 0);
            ans[i]=(x*digitSum)%MOD;
        }
        return ans;
    }
};
