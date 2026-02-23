class Solution {
public:
    bool hasAllCodes(string s, int k) {
        int n=s.size();
        if(n==1)
        return 0;
        int codes=1<<k; //pow(2,k) no of binary codes exist
        unordered_set<string>st;
        for(int i=0;i<=n-k;i++){
            string str=s.substr(i,k);
            if(!st.count(str)){
                st.insert(str);
                codes--;
            }
            if(codes==0)
            return 1;
        }
        return 0;
    }
};
