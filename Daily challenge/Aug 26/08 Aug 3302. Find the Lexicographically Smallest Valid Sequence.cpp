class Solution {
public:
    vector<int> validSequence(string word1, string word2) {
        int n=word1.size(),m=word2.size();
        vector<int>right(n,0);
        int rmatched=0;
        int i=n-1,j=m-1;
        while(i>=0){
            if(j>=0 && word1[i]==word2[j]){
                rmatched++;
                j--;
            }
            right[i]=rmatched;
            i--;
        }
        vector<int>seq;
        bool changepow=1;
        i=0,j=0;
        while(i<n && j<m){
            if(word1[i]==word2[j]){
                seq.push_back(i);
                j++;
            }else if(changepow && i+1<n && right[i+1]>=m-j-1){
                seq.push_back(i);
                j++;
                changepow=0;
            }
            i++;
        }
        return j==m ? seq : vector<int>();
    }
};
