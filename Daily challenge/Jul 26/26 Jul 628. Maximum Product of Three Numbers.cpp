class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int a=INT_MIN,b=INT_MIN,c=INT_MIN;
        int x=INT_MAX,y=INT_MAX;
        for(int i:nums){
            if(i>a){
                c=b;
                b=a;
                a=i;
            }else if(i>b){
                c=b;
                b=i;
            }else if(i>c)
            c=i;

            if(i<x){
                y=x;
                x=i;
            }else if(i<y){
                y=i;
            }
        }
        return max(a*b*c,a*x*y);
    }
};
