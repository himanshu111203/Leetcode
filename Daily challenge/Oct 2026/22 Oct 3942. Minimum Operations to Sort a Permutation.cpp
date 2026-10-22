class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n=nums.size();
        if(n==1)
        return 0;
        int start=find(nums.begin(),nums.end(),0)-nums.begin();
        bool asc=1,dsc=1;
        for(int i=1;i<n;i++){
            int val=nums[(start+i)%n];
            if(val!=i)
            asc=0;
            if(val!=n-i)
            dsc=0;
            if(!asc && !dsc)
            return -1;
        }
        if(asc)
        return min(start,n-start+2);
        return min(n-start,start+2);
    }
};
