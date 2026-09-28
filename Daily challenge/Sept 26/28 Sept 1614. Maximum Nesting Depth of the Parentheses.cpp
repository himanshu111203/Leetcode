class Solution {
public:
    int maxDepth(string s) {
        int ans=0;
        stack<char>st;
        for(int i:s){
            if(i=='('){
                st.push('(');
                if(ans<st.size())
                ans=st.size();
            }else if(i==')')
            st.pop();
        }
        return ans;
    }
};
