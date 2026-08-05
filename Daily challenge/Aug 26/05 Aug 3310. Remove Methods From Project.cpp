class Solution {
public:
    int a;
    void dfs(int u,vector<int>adj[],vector<bool>&vis){
        vis[u]=1;
        a--;
        for(int v:adj[u]){
            if(!vis[v])
            dfs(v,adj,vis);
        }
    }
    vector<int> remainingMethods(int n, int k, vector<vector<int>>& invocations) {
        a=n;
        vector<bool>vis(n,0);
        vector<int>adj[n];
        for(auto &i:invocations)
        adj[i[0]].push_back(i[1]);
        dfs(k,adj,vis);
        vector<int>ans;
        for(auto &i:invocations){
            if(!vis[i[0]] && vis[i[1]]){
                for(int i=0;i<n;i++)
                ans.push_back(i);
                return ans;
            }
        }
        for(int i=0;i<n;i++){
            if(!vis[i])
            ans.push_back(i);
        }
        return ans;
    }
};
