class Solution {
public:
    bool find(vector<int>& arr, int start,vector<bool>&visited){
        if(start<0 || start>=arr.size() || visited[start])
        return 0;
        if(arr[start]==0)
        return 1;
        visited[start]=1;
        return find(arr,start+arr[start],visited) || find(arr,start-arr[start],visited);
    }
    bool canReach(vector<int>& arr, int start) {
        vector<bool>visited(arr.size());
        return find(arr,start,visited);
    }
};
