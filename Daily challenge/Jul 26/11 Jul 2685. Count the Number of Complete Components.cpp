class Solution {
public:
    void dfs(int u,vector<int>adj[],vector<bool>&visited,int &nodes,int &edges){
        visited[u]=1;
        nodes++;
        edges+=adj[u].size();
        for(int &v:adj[u]){
            if(!visited[v])
            dfs(v,adj,visited,nodes,edges);
        }
    }
    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        vector<int>adj[n];
        for(auto &e:edges){
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }
        vector<bool>visited(n,0);
        int ans=0;
        for(int i=0;i<n;i++){
            if(!visited[i]){
                int nodes=0,edges=0;
                dfs(i,adj,visited,nodes,edges);
                edges/=2;
                if(nodes*(nodes-1)/2==edges)
                ans++;
            }
        }
        return ans;
    }
};
