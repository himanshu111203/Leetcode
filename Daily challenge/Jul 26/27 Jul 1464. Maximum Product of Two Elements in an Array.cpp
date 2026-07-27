class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int a=INT_MIN,b=INT_MIN;
        for(int i:nums){
            if(i>=a){
                b=a;
                a=i;
            }else if(i>b)
            b=i;
        }
        return (a-1)*(b-1);
    }
};
