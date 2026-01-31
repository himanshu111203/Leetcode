class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int start=0,end=letters.size()-1,mid;
        char ans=' ';
        while(start<=end){
            mid=start+(end-start)/2;
            if(letters[mid]>target){
                ans=letters[mid];
                end=mid-1;
            }
            else
            start=mid+1;
        }
        return (ans==' ')?letters[0]:ans;
    }
};
