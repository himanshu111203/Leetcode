class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int>s(nums.begin(),nums.end());
        int a=k;
        while(1){
            if(!s.count(a))
            return a;
            a+=k;
        }
        return -1;
    }
};
