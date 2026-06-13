class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string ans="";
        for(int i=0;i<words.size();i++){
            int w=0;
            for(int j=0;j<words[i].size();j++){
                w+=weights[words[i][j]-'a'];
            }
            w%=26;
            w=25-w;
            ans+=('a'+w);
        }
        return ans;
    }
};
