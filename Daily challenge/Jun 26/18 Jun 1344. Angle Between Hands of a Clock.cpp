class Solution {
public:
    double angleClock(int hour, int minutes) {
        hour*=5;
        double h=hour+(minutes/12.0);
        double ans=abs(minutes-h);
        ans=min(ans,60-ans);
        return ans*6;
    }
};
