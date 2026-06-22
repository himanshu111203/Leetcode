class Solution {
public:
    int maxNumberOfBalloons(string text) {
        vector<int>freq(26,0);
        for(char c:text)
        freq[c-'a']++;
        int b=freq[1],a=freq[0],l=freq[11]/2,o=freq[14]/2,n=freq[13];
        return min({b,a,l,o,n});
    }
};
