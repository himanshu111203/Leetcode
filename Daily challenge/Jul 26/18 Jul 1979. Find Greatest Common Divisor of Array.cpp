class Solution {
public:
    int find(int a,int b){
        return (b==0) ?a :find(b,a%b);
    }
    int findGCD(vector<int>& nums) {
        int mini=1001,maxi=0;
        for(int i:nums){
            if(i<mini)
            mini=i;
            if(i>maxi)
            maxi=i;
        }
        return find(mini,maxi);
    }
};
