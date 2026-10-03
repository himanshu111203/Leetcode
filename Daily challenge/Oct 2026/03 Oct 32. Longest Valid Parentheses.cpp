class Solution {
public:
    int longestValidParentheses(string s) {
        if(s.size()<2)
        return 0;
        stack<int>st;
        st.push(-1);
        int i=0,n=s.size();
        while(i<n){
            if(s[i]=='(')
            st.push(i);
            else{
                if(st.top()==-1)
                st.push(i);
                else if(s[st.top()]=='(')
                st.pop();
                else 
                st.push(i);
            }
            i++;
        }
        int ans=0;
        if(st.top()==-1)
        return n;
        int b=n;
        while(!st.empty()){
            ans=max(ans,b-st.top()-1);
            b=st.top();
            st.pop();
        }
        return ans;
    }
};
