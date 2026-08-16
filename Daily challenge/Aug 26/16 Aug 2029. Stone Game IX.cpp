class Solution {
public:
    bool stoneGameIX(vector<int>& stones) {
        int c1=0,c2=0,c3=0;
        for(int i:stones){
            if(i%3==0)
            c1++;
            else if(i%3==1)
            c2++;
            else
            c3++;
        }
        if(c1%2==0)
        return c2>0 && c3>0;
        return abs(c2-c3)>2;
    }
};
