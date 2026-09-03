class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int odd=INT_MAX,even=INT_MAX;
        for(int i:nums1){
            if(i%2==0)
            even=min(even,i);
            else
            odd=min(odd,i);
        }
        if(odd==INT_MAX || even==INT_MAX) return 1;
        return (even<odd)?0:1;
    }
};
