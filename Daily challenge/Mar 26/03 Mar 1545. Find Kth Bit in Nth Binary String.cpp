// T.C = O(N), S.C = O(N) 
class Solution {
public:
    char findKthBit(int n, int k) {
        if(n==1)
        return '0';
        int len=(1<<n)-1; // pow(2,n)-1
        int mid=len/2+1;
        if(k==mid)
        return '1';
        if(k<mid)
        return findKthBit(n-1,k);
        else{
            char ch=findKthBit(n-1,len-k+1);
            return (ch=='0') ?'1':'0';
        }
    }
};

// T.C = O(2^N), S.C = O(2^N) 
class Solution {
public:
    string invert(string s){
        for(int i=0;i<s.size();i++){
            if(s[i]=='0')
            s[i]='1';
            else
            s[i]='0';
        }
        return s;
    }
    string reverse(string s){
        int i=0,j=s.size()-1;
        while(i<j)
        swap(s[i++],s[j--]);
        return s;
    }
    char findKthBit(int n, int k) {
        string s="0";
        while(--n){
            string temp=s;
            s=s+'1'+reverse(invert(temp));
        }
        return s[k-1];
    }
};
