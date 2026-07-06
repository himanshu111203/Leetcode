class Solution {
public:
    static bool comp(vector<int>&a,vector<int>&b){
        if(a[0]==b[0])
        return a[1]>b[1];
        return a[0]<b[0];
    }
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        int n=intervals.size();
        int ans=n;
        sort(intervals.begin(),intervals.end(),comp);
        vector<int>temp=intervals[0];
        for(int i=1;i<n;i++){
            if(intervals[i][0]>=temp[0] && intervals[i][1]<=temp[1])
            ans--;
            else
            temp=intervals[i];
        }
        return ans;
    }
};
