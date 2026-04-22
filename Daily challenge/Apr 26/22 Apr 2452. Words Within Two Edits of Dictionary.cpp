class Solution {
public:
    vector<string> twoEditWords(vector<string>& queries, vector<string>& dictionary) {
        int n=queries[0].size();
        vector<string>ans;
        for(auto &s:queries){
            for(auto &d:dictionary){
                int c=0;
                for(int i=0;i<n;i++){
                    if(s[i]!=d[i])
                    c++;
                    if(c>2)
                    break;
                }
                if(c<=2){
                    ans.push_back(s);
                    break;
                }
            }
        }
        return ans;
    }
};
