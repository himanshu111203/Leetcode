class Solution {
public:
    string ans="";
    bool solve(string&curr,vector<int>&freq,string&target,int i,bool greater) {
        if(i==target.size()){
            if(greater){
                ans=curr;
                return 1;
            }
            return 0;
        }
        for(char ch ='a';ch<='z';ch++){
            if(freq[ch-'a']==0)
            continue;
            if(greater==0 && ch<target[i])
            continue;
            curr.push_back(ch);
            freq[ch-'a']--;
            bool isGreater=greater || ch>target[i];
            if(solve(curr,freq,target,i+1,isGreater)) 
            return 1;
            curr.pop_back();
            freq[ch-'a']++;
        }
        return 0;
    }
    string lexGreaterPermutation(string s, string target) {
        vector<int>freq(26,0);
        for(char ch:s)
        freq[ch-'a']++;
        string curr;
        solve(curr,freq,target,0,0);
        return ans;
    }
};
