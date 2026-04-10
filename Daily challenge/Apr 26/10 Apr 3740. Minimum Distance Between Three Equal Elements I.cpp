class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        unordered_map<int,vector<int>>m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]].push_back(i);
        }
        int ans=INT_MAX;
        for(auto i:m){
            if(i.second.size()>=3){
                for(int j=0;j<i.second.size()-2;j++)
                ans=min(ans,abs(i.second[j]-i.second[j+1])+abs(i.second[j+1]-i.second[j+2])+abs(i.second[j+2]-i.second[j]));
            }
        }
        return (ans==INT_MAX) ? -1 :ans;
    }
};
