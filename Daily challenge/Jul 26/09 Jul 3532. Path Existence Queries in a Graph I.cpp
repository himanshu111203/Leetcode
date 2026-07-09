class Solution {
public:
    vector<int>parent,sz;
    int find(int x){
        if(parent[x]==x)
        return x;
        return parent[x]=find(parent[x]);
    }
    void unite(int a,int b){
        a=find(a);
        b=find(b);
        if(a==b)
        return;
        if(sz[a]<sz[b])
        swap(a,b);
        parent[b]=a;
        sz[a]+=sz[b];
    }
    vector<bool> pathExistenceQueries(int n, vector<int>& nums, int maxDiff, vector<vector<int>>& queries) {
        parent.resize(n);
        sz.assign(n,1);
        for(int i=0;i<n;i++)
        parent[i]=i;
        for(int i=1;i<n;i++){
            if(nums[i]-nums[i-1]<=maxDiff)
            unite(i,i-1);
        }
        int m=queries.size();
        vector<bool>ans(m);
        for(int i=0;i<m;i++){
            int u=queries[i][0],v=queries[i][1];
            ans[i]=(find(u)==find(v));
        }
        return ans;
    }
};
