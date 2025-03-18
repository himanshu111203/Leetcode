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
    int maximalRectangle(vector<vector<char>>& matrix) {
        int n=matrix.size(),m=matrix[0].size();
        int ans=0;
        vector<int>arr(m,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]=='0')
                arr[j]=0;
                else
                arr[j]++;
            }
            ans=max(ans,area(arr));
        }
        return ans;
    }
};
