// Backtracking  T.C O(n·2ⁿ)  S.C O(n·2ⁿ)
class Solution {
public:
    void solve(int n,vector<string>&ans,string temp){
        if(temp.size()==n){
            ans.push_back(temp);
            return;
        }
        for(char ch='a';ch<='c';ch++){
            if(!temp.empty() && temp.back()==ch)
            continue;
            temp.push_back(ch);
            solve(n,ans,temp);
            temp.pop_back();
        }
    }
    string getHappyString(int n, int k) {

        vector<string>ans;
        string temp;
        solve(n,ans,temp);
        if(k>ans.size()) 
        return "";
        return ans[k-1];
    }
};

// Mathematical block solution T.C O(n)  S.C O(1)
class Solution {
public:
    string getHappyString(int n, int k) {
        vector<char>letter(3);
        letter[0]='a';
        letter[1]='b';
        letter[2]='c';
        string temp;
        int start=0,end=3*pow(2,n-1),pre;
        if(k>end)
        return "";
        int diff=(end-start)/3;
        if(k<=start+1*diff){
            temp.push_back('a');
            pre=0;
            end=start+1*diff;
        }else if(k<=start+2*diff){
            temp.push_back('b');
            pre=1;
            start=start+diff;
            end=start+diff;
        }else{
            temp.push_back('c');
            pre=2;
            start=start+2*diff;
        }
        n--;
        while(n--){
            diff=(end-start)/2;
            if(pre==1){
                if(k<=start+diff){
                    temp.push_back('a');
                    pre=0;
                    end=start+diff;
                }else{
                    temp.push_back('c');
                    pre=2;
                    start=start+diff;
                }
            }else{
                if(k<=start+diff){
                    temp.push_back(letter[(pre+1)%3]);
                    pre=(pre+1)%3;
                    end=start+diff;
                }else{
                    temp.push_back(letter[(pre+2)%3]);
                    pre=(pre+2)%3;
                    start=start+diff;
                }
            }
        }
        return temp;
    }
};
