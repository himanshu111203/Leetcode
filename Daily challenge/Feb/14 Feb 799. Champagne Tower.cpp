// its like a pascal traingle
//pour = 6         (in glass)extra
//              (1)5
//        2.5/        \2.5
//          /          \
//      (1)1. 5       (1)1.5
// 0.75 /    \0.75     /    \0.75     
//    /      \   0.75/      \
//(0.75)0     (1)0. 5       (0.75)0

class Solution {
public:
    double champagneTower(int poured, int query_row, int query_glass) {
        double pour=poured;
        vector<double>arr;
        arr.push_back(pour);
        while(query_row--){
            double a=0;
            for(int i=0;i<arr.size();i++){
                double c=arr[i];
                if(c>1){
                    c--;
                    c/=2;
                    arr[i]=a+c;
                    a=c;
                }else{
                    arr[i]=a;
                    a=0;
                }
            }
            arr.push_back(a);
        }
        if(arr[query_glass]>=1)
        return 1;
        return arr[query_glass];
    }
};
