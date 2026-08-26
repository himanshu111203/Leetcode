class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int c=0,i=0,n=s.size();
        string ans="";
        int a=0;
        while(s[a]=='0')
        a++;
        for(int j=a;j<n;j++){
            if(s[j]=='1')
            c++;
            while(c>k){
                if(s[i]=='1')
                c--;
                i++;
            }
            while(s[i]=='0')
            i++;
            if(c==k){
                string temp=s.substr(i,j-i+1);
                if(ans=="" || temp.size()<ans.size() || (temp.size()==ans.size() && temp<ans))
                ans=temp;
            }
        }
        return ans;
    }
};
