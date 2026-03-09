// Recursion with memoization
class Solution {
public:
int mod=1e9+7;
int dp[201][201][2];
    int solve(int onesleft,int zerosleft,bool lastwasone,int limit){
        if(onesleft==0 && zerosleft==0)
        return 1;
        if(dp[onesleft][zerosleft][lastwasone]!=-1)
        return dp[onesleft][zerosleft][lastwasone];
        int result=0;
        // explore zero
        if(lastwasone){
            for(int len=1;len<=min(limit,zerosleft);len++)
            result=(result+solve(onesleft,zerosleft-len,0,limit))%mod;
        }
        //explore one
        else{
            for(int len=1;len<=min(limit,onesleft);len++)
            result=(result+solve(onesleft-len,zerosleft,1,limit))%mod;
        }
        return dp[onesleft][zerosleft][lastwasone]=result;
    }
    int numberOfStableArrays(int zero, int one, int limit) {
        memset(dp,-1,sizeof(dp));
        int startwithone=solve(one,zero,0,limit);
        int startwithzero=solve(one,zero,1,limit);
        return (startwithone+startwithzero)%mod;
    }
};

// Bottom Up
class Solution {
public:
int mod=1e9+7;
int dp[201][201][2];
    int numberOfStableArrays(int zero, int one, int limit) {
        memset(dp,0,sizeof(dp));
        dp[0][0][0]=1;
        dp[0][0][1]=1;
        for(int onesleft=0;onesleft<=one;onesleft++){
            for(int zerosleft=0;zerosleft<=zero;zerosleft++){
                if(onesleft==0 && zerosleft==0)
                continue;
                // explore 0's
                int result=0;
                for(int len=1;len<=min(limit,zerosleft);len++)
                result=(result+dp[onesleft][zerosleft-len][0])%mod;
                dp[onesleft][zerosleft][1]=result;
                // explore 1's
                result=0;
                for(int len=1;len<=min(limit,onesleft);len++)
                result=(result+dp[onesleft-len][zerosleft][1])%mod;
                dp[onesleft][zerosleft][0]=result;
            }
        }
        return (dp[one][zero][0]+dp[one][zero][1])%mod;
    }
};
