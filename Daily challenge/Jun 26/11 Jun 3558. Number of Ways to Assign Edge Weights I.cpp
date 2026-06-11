class Solution {
public:
    long long modpow(long long a,long long b){
        long long ans=1,mod=1e9+7;
        while(b){
            if(b&1)
            ans=(ans*a)%mod;
            a=(a*a)%mod;
            b>>=1;
        }
        return ans;
    }
    void dfs(int i,vector<int>adj[],vector<bool>&visited,int c,int &d){
        visited[i]=1;
        for(int j=0;j<adj[i].size();j++){
            int v=adj[i][j];
            if(!visited[v])
            dfs(v,adj,visited,c+1,d);
        }
        d=max(d,c);
    }
    int assignEdgeWeights(vector<vector<int>>& edges) {
        int n=edges.size();
        vector<int>adj[n+1];
        for(int i=0;i<n;i++){
            int u=edges[i][0]-1,v=edges[i][1]-1;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<bool>visited(n+1,0);
        int d=INT_MIN;
        dfs(0,adj,visited,0,d);
        return (int)modpow(2,d-1);
    }
};
