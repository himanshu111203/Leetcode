class Solution {
public:
    bool check(int a,int ind){
        int b=0;
        while(a){
            b+=(a%10);
            a/=10;
        }
        return b==ind;
    }
    int smallestIndex(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(check(nums[i],i))
            return i;
        }
        return -1;
    }
};
