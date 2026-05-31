class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        sort(asteroids.begin(),asteroids.end());
        long long m=mass;
        for(int i:asteroids){
            if(i>m)
            return 0;
            m+=i;
        }
        return 1;
    }
};
