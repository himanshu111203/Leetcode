Method 1 - arr[i]*(NSR-NLR-1)

class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int a=heights.size();
        vector<int>nsr(a);
        vector<int>nsl(a);
        stack<int>s;
        for(int i=0;i<a;i++)
        {
            while(!s.empty() && heights[i]<heights[s.top()])
            {
                nsr[s.top()]=i;
                s.pop();
            }
            s.push(i);
        }
        while(!s.empty())
        {
            nsr[s.top()]=a;
            s.pop();
        }
        for(int i=a-1;i>=0;i--)
        {
            while(!s.empty() && heights[i]<heights[s.top()])
            {
                nsl[s.top()]=i;
                s.pop();
            }
            s.push(i);
        }
        while(!s.empty())
        {
            nsl[s.top()]=-1;
            s.pop();
        }
        int ans=0;
        for(int i=0;i<a;i++)
        {
            ans=max(ans,heights[i]*(nsr[i]-nsl[i]-1));
        }
        return ans;
    }
};

Method 2

class Solution {
public:
    int area(vector<int>&arr){
        int n=arr.size(),ans=0,ind;
        stack<int>s;
        for(int i=0;i<n;i++){
            while(!s.empty() && arr[i]<arr[s.top()]){
                ind=s.top();
                s.pop();
                if(!s.empty())
                ans=max(ans,arr[ind]*(i-s.top()-1));
                else
                ans=max(ans,arr[ind]*i);
            }
            s.push(i);
        }
        while(!s.empty()){
            ind=s.top();
            s.pop();
            if(!s.empty())
            ans=max(ans,arr[ind]*(n-s.top()-1));
            else
            ans=max(ans,arr[ind]*n);
        }
        return ans;
    }
};
