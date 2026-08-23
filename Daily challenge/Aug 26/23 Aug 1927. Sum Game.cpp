class Solution {
public:
    bool sumGame(string num) {
        int n=num.size();
        int leftsum=0,rightsum=0,lqcount=0,rqcount=0;
        for(int i=0;i<n;i++){
            if(i<n/2){
                if(num[i]=='?')
                lqcount++;
                else
                leftsum+=(num[i]-'0');
            }else{
                if(num[i]=='?')
                rqcount++;
                else
                rightsum+=(num[i]-'0');
            }
        }
        int totalq=lqcount+rqcount;
        if(totalq%2==1)
        return 1;
        int left=2*leftsum+9*lqcount;
        int right=2*rightsum+9*rqcount;
        if(left==right)
        return 0;
        else
        return 1;
    }
};
