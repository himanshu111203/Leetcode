class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int i=0,j=0,m=nums1.size(),n=nums2.size(),ans=0;
        while(i<m && j<n){
            if(nums1[i]<=nums2[j] && i<=j){
                ans=max(ans,j-i);
                j++;
            }else if(nums1[i]>nums2[j]){
                i++;
                if(j<i)
                j=i;
            }
        }
        return ans;
    }
};
