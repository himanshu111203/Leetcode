class Solution {
public:
    int ans=INT_MAX;
    unordered_set<int>s;
    void dfs(int i,vector<pair<int,int>>adj[],vector<bool>&visited){
        visited[i]=1;
        for(auto &[v,w]:adj[i]){
            ans=min(ans,w);
            if(!visited[v])
            dfs(v,adj,visited);
        }
    }
    int minScore(int n, vector<vector<int>>& roads) {
        vector<pair<int,int>>adj[n+1];
        for(int i=0;i<roads.size();i++){
            int u=roads[i][0],v=roads[i][1],w=roads[i][2];
            adj[u].push_back({v,w});
            adj[v].push_back({u,w});
        }
        vector<bool>visited(n+1,0);
        dfs(1,adj,visited);
        return ans;
    }
};
