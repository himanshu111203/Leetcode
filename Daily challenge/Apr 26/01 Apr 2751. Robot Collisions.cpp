class Solution {
public:
    vector<int> survivedRobotsHealths(vector<int>& positions, vector<int>& healths, string directions) {
        int n=positions.size();
        vector<int>indices(n);
        for(int i=0;i<n;i++)
        indices[i]=i;
        auto lambda=[&](int i,int j){
            return positions[i]<positions[j];
        };
        sort(indices.begin(),indices.end(),lambda);
        stack<int>s;
        for(int currind:indices){
            if(directions[currind]=='R')
            s.push(currind);
            else{
                while(!s.empty() && healths[currind]>0){
                    int topind=s.top();
                    s.pop();
                    if(healths[topind]>healths[currind]){
                        healths[topind]-=1;
                        healths[currind]=0;
                        s.push(topind);
                    }else if(healths[topind]<healths[currind]){
                        healths[topind]=0;
                        healths[currind]-=1;
                    }
                    else{
                        healths[topind]=0;
                        healths[currind]=0;
                    }
                }
            }
        }
        vector<int>ans;
        for(int i:healths){
            if(i>0)
            ans.push_back(i);
        }
        return ans;
    }
};
