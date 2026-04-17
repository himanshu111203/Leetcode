class Solution {
public:
    int reverse(int x) {
        int rev = 0;
        while (x > 0) {
            rev = rev * 10 + x % 10;
            x /= 10;
        }
        return rev;
    }
    int minMirrorPairDistance(vector<int>& nums) {
        unordered_map<int, int> mpp;
        int n = nums.size(), ans = 1e6;

        for (int i = 0; i < n; i++) {
            if (mpp.count(nums[i])) {
                ans = min(ans, i - mpp[nums[i]]);
            }
            mpp[reverse(nums[i])] = i;
        }
        return ans == 1e6 ? -1 : ans;
    }
};
