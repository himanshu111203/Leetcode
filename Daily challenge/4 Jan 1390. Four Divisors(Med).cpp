class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        unordered_map<int,int>m;
        int ans=0;
        for(int i=0;i<nums.size();i++){                     // iterate each nums one by one
            if(m.find(nums[i])!=m.end())
            ans+=m[nums[i]];
            else{
                int a=2;
                int b=1+nums[i];                             // in 4 divisors 1 and nums[i] itself is also included we need two more divisor
                for(int j=2;j*j<=nums[i];j++){              // check 2 to sqrt of nums[i]
                    if(nums[i]%j==0){
                        int k=nums[i]/j;
                        if(j==k){                           // if nums[i]=49 then 7 is divisor
                            a++;
                            b+=j;
                        }else{
                            a+=2;                          // if nums[i]=21 then 3 and 7 are divisor
                            b+=j+k;
                        }
                    }
                    if(a>4)                              // more than 4 divisors break the loop 
                    break;
                }
                if(a==4){
                    ans+=b;
                    m[nums[i]]=b;
                }
            }
        }
        return ans;
    }
};
