// b start hote hi aage ke jitne a h unse katte chlo

class Solution {
public:
    int minimumDeletions(string s) {
        int bCount=0;
        int deletions=0;
        for(char c:s){
            if(c=='b'){
                bCount++;
            } 
            else{
                deletions=min(deletions+1,bCount);
            }
        }
        return deletions;
    }
};
