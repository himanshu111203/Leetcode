class Solution {
public:
    int minimumOperationsToMakeEqual(int x, int y) {
        int ans=0;
        queue<int>q;
        q.push(x);
        unordered_set<int>s;
        while(!q.empty()){
            int n=q.size();
            while(n--){
                int temp=q.front();
                q.pop();
                if(temp==y)
                return ans;
                if(temp%11==0 && !s.count(temp/11)){
                    q.push(temp/11);
                    s.insert(temp/11);
                }
                if(temp%5==0 && !s.count(temp/5)){
                    q.push(temp/5);
                    s.insert(temp/5);
                }
                if(temp>y && !s.count(temp-1)){
                    q.push(temp-1);
                    s.insert(temp-1);
                }
                if(!s.count(temp+1)){
                    q.push(temp+1);
                    s.insert(temp+1);
                }
            }
            ans++;
        }
        return -1;
    }
};
