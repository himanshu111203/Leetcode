class Solution {
public:
    int count(int a){
        int c=0;
        while(a){
            c+=a&1;
            a>>=1;
        }
        return c;
    }

    vector<int> sortByBits(vector<int>& arr) {
        auto lambda=[&](int &a,int &b){
            int ca=count(a);
            int cb=count(b);
            if(ca==cb) return a<b;
            return ca<cb;         // jiska count chota h wo phle aaega
        };
        sort(arr.begin(),arr.end(),lambda);
        return arr;
    }
};
