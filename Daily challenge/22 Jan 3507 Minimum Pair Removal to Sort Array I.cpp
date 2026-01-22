class Solution {
public:
    int minpair(vector<int>&arr){
        int mini=INT_MAX,ind=-1;
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i]+arr[i+1]<mini){
                mini=arr[i]+arr[i+1];
                ind=i;
            }
        }
        return ind;
    }
    int minimumPairRemoval(vector<int>& nums) {
        int c=0;
        while(!is_sorted(nums.begin(),nums.end())){
            int ind=minpair(nums);
            nums[ind]+=nums[ind+1];
            nums.erase(begin(nums)+ind+1);
            c++;
        }
        return c;
    }
};
