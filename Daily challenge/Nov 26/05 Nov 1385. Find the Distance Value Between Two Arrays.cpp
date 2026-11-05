class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int ans=0;
        for(int i:arr1){
            bool greater=1;
            for(int j:arr2){
                if(abs(i-j)<=d){
                    greater=0;
                    break;
                }
            }
            if(greater)
            ans++;
        }
        return ans;
    }
};
