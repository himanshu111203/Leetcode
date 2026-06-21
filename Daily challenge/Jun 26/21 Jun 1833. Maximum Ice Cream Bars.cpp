class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        int i=0,n=costs.size(),ans=0;
        while(i<n && coins){
            if(coins>=costs[i]){
                ans++;
                coins-=costs[i];
            }else
            coins=0;
            i++;
        }
        return ans;
    }
};
