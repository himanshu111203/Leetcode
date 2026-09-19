class Solution {
public:
    bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2) {
        int closestx=max(x1,min(xCenter,x2));
        int closesty=max(y1,min(yCenter,y2));
        int dx=xCenter-closestx;
        int dy=yCenter-closesty;
        return dx*dx+dy*dy<=radius*radius;
    }
};
