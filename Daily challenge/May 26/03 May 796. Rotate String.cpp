class Solution {
public:
    void rotate(string &s){
        int n=s.size();
        char a=s[0];
        for(int i=0;i<n-1;i++){
            s[i]=s[i+1];
        }
        s[n-1]=a;
        return;
    }
    bool rotateString(string s, string goal) {
        int n=s.size(),m=goal.size();
        if(n!=m) return 0;
        for(int i=0;i<n;i++){
            rotate(s);
            if(s==goal)
            return 1;
        }
        return 0;
    }
};
