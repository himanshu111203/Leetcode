class Solution {
public:
    int maximumLength(vector<int>& nums) {
        unordered_map<int,int>m;
        for(int i:nums)
        m[i]++;
        int ans=1,mx=*max_element(nums.begin(),nums.end());
        unordered_set<int>s;
        for(int i:nums){
            if(s.count(i))
            continue;
            long long r = sqrt(i);
            if(i==1){
                int len=m[1];
                if(len%2==0)
                len--;
                ans=max(len,ans);
                s.insert(i);
            }
            else{
                int len=0;
                long long x=i;
                s.insert(i);
                while(1){
                    if(m[x]==1){
                        len++;
                        ans=max(ans,len);
                        break;
                    }else if(m[x]>1){
                        len+=2;
                    }else{
                        len--;
                        ans=max(ans,len);
                        break;
                    }
                    if(x>mx)
                    break;
                    x*=x;
                }
            }
        }
        return ans;
    }
};
