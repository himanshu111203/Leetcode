// Backtracking  T.C O(n·2ⁿ)  S.C O(n·2ⁿ)
class Solution {
public:
void solve(int i,int n,vector<string>&ans,string temp,int pre,vector<char>letter){
    if(i==n){
        ans.push_back(temp);
        return;
    }
    if(pre==-1){
        temp.push_back('a');
        solve(i+1,n,ans,temp,0,letter);
        temp.pop_back();
        temp.push_back('b');
        solve(i+1,n,ans,temp,1,letter);
        temp.pop_back();
        temp.push_back('c');
        solve(i+1,n,ans,temp,2,letter);
        temp.pop_back();
    }
    else if(pre==1){
        temp.push_back(letter[(pre+2)%3]);
        solve(i+1,n,ans,temp,(pre+2)%3,letter);
        temp.pop_back();
        temp.push_back(letter[(pre+1)%3]);
        solve(i+1,n,ans,temp,(pre+1)%3,letter);
        temp.pop_back();
    }
    else{
    temp.push_back(letter[(pre+1)%3]);
    solve(i+1,n,ans,temp,(pre+1)%3,letter);
    temp.pop_back();
    temp.push_back(letter[(pre+2)%3]);
    solve(i+1,n,ans,temp,(pre+2)%3,letter);
    temp.pop_back();
    }
}
    string getHappyString(int n, int k) {

        vector<char>letter(3);
        letter[0]='a';
        letter[1]='b';
        letter[2]='c';
        vector<string>ans;
        string temp;
        solve(0,n,ans,temp,-1,letter);
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
