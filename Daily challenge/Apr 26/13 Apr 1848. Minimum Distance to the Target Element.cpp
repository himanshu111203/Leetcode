class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int i=start,j=start,n=nums.size();
        while(i>=0 && j<n){
            if(nums[i]==target)
            return start-i;
            if(nums[j]==target)
            return j-start;
            i--,j++;
        }
        while(i>=0){
            if(nums[i]==target)
            return start-i;
            i--;
        }
        while(j<n){
            if(nums[j]==target)
            return j-start;
            j++;
        }
        return -1;
    }
};
