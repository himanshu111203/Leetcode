class Solution {
public:
    string addone(string &s){
        int n=s.size()-1,carry=0;
        if(s[n]=='1'){
            carry=1;
            s[n]='0';
        }
        else{
            s[n]='1';
            return s;
        }
        n--;
        while(n>=0 && carry){
            if(s[n]=='1'){
                carry=1;
                s[n]='0';
            }
            else{
                s[n]='1';
                return s;
            }
            n--;
        }
        if(carry)
        s.insert(0,1,'1');
        return s;
    }
    int numSteps(string s) {
        int c=0;
        while(s!="1"){
            if(s[s.size()-1]=='0')
            s.pop_back();                    // divide by 2 then right shift if there is multiply by 2 then left sift
            else
            addone(s);
            c++;
        }
        return c;
    }
};
