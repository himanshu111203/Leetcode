class Solution {
public:
    string reverseParentheses(string s) {
        stack<int>st;
        string ans="";
        for(char c:s){
            if(c=='(')
            st.push(ans.size());
            else if(c==')'){
                int i=st.top(),j=ans.size()-1;
                st.pop();
                while(i<j)
                swap(ans[i++],ans[j--]);
            }
            else
            ans+=c;
        }
        return ans;
    }
};
