class Solution {
public:
    vector<int> asteroidCollision(vector<int>& ast) {
        stack<int>s;
        for(int i=0;i<ast.size();i++){
            if(ast[i]>0 || s.empty())
            s.push(ast[i]);
            else{
                while(!s.empty() && s.top()>0 && s.top()<abs(ast[i]))
                s.pop();
                if(!s.empty() && s.top()==abs(ast[i]))
                s.pop();
                else{
                    if(s.empty() || s.top()<0)
                    s.push(ast[i]);
                }
            }
        }
        vector<int>ans;
        while(!s.empty()){
            ans.push_back(s.top());
            s.pop();
        }
        if(ans.size()<1)
        return ans;
        int a=0,b=ans.size()-1;
        while(a<b)
        swap(ans[a++],ans[b--]);
        return ans;
    }
};
