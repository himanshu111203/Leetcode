class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int l=0,r=0,d=0;
        for(char i:moves){
            if(i=='L') l++;
            else if(i=='R') r++;
            else d++;
        }
        return abs(l-r)+d;
    }
};
