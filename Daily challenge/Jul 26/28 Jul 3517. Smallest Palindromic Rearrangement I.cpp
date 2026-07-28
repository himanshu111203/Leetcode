class Solution {
public:
    string smallestPalindrome(string s) {
        vector<int>freq(26,0);
        for(char c:s)
        freq[c-'a']++;
        int i=0,n=s.size(),j=0;
        while(i<(n+1)/2 && j<26){
            if(freq[j]>1){
                s[i++]=(j+'a');
                freq[j]-=2;
            }else 
            j++;
        }
        for(int i=(n+1)/2;i<n;i++)
        s[i]=s[n-i-1];
        return s;
    }
};
