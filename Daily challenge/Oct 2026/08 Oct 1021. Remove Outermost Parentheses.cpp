class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char>st;
        string ans="";
        for(int i=0;i<s.size();i++){
            if(st.empty()){
                st.push(s[i]);
            }else{
                if(st.size()==1 && s[i]==')')
                st.pop();
                else{
                    if(s[i]=='(')
                    st.push(s[i]);
                    else
                    st.pop();
                    ans+=s[i];
                }
            }
        }
        return ans;
    }
};
