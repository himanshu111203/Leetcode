class Solution {
public:
    long long countMajoritySubarrays(vector<int>& nums, int target) {
        unordered_map<int,int>m;
        m[0]=1;
        int sum=0;
        long long ans=0,validleft=0;
        for(int i:nums){
            if(i==target){
                validleft+=m[sum];
                sum++;
            }else{
                sum--;
                validleft-=m[sum];
            }
            m[sum]++;
            ans+=validleft;
        }
        return ans;
    }
};
