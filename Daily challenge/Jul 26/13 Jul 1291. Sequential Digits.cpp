class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        int startlen=0,a=low;
        while(a){
            startlen++;
            a/=10;
        }
        vector<int>ans;
        string s="123456789";
        for(int len=startlen;len<10;len++){
            for(int i=0;i<10-len;i++){
                int d=stoi(s.substr(i,len));
                if(d>=low && d<=high)
                ans.push_back(d);
                if(d>high)
                return ans;
            }
        }
        return ans;
    }
};
