class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        priority_queue<int,vector<int>,greater<int>>q;
        for(int i=0;i<arr.size();i++){
            q.push(arr[i]);
        }
        unordered_map<int,int>m;
        int rank=1;
        while(!q.empty()){
            if(!m.count(q.top())){
                m[q.top()]=rank;
                rank++;
            }
            q.pop();
        }
        for(int i=0;i<arr.size();i++){
            arr[i]=m[arr[i]];
        }
        return arr;
    }
};
