class Solution {
public:
    int m,n;
    int row[4]={0,0,1,-1};
    int col[4]={1,-1,0,0};
    bool valid(int i,int j){
        return i>=0 && i<m && j>=0 && j<n;
    }
    bool findSafeWalk(vector<vector<int>>& grid, int health) {
        m=grid.size(),n=grid[0].size();
        vector<vector<int>>dist(m,vector<int>(n,INT_MAX));
        deque<pair<int,int>>q;
        q.push_front({0,0});
        dist[0][0]=grid[0][0];
        while(!q.empty()){
            auto [x,y]=q.front();
            q.pop_front();
            for(int k=0;k<4;k++){
                int nx=x+row[k],ny=y+col[k];
                if(valid(nx,ny)){
                    int w=grid[nx][ny];
                    if(dist[x][y]+w<dist[nx][ny]){
                        dist[nx][ny]=dist[x][y]+w;
                        w==0 ? q.push_front({nx,ny}) : q.push_back({nx,ny});
                    }
                }
            }
        }
        return dist[m-1][n-1]<health;
    }
};
