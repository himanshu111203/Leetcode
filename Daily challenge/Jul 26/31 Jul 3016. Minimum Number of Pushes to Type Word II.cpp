class Solution {
public:
    int minimumPushes(string word) {
        vector<int>freq(26,0);
        for(char ch:word)
        freq[ch-'a']++;
        priority_queue<int>q;
        for(int i=0;i<26;i++){
            if(freq[i]>0)
            q.push(freq[i]);
        }
        int ans=0,a=1;
        while(!q.empty()){
            int k=8;
            while(!q.empty() && k){
                ans+=(q.top()*a);
                q.pop();
                k--;
            }
            a++;
        }
        return ans;
    }
};
