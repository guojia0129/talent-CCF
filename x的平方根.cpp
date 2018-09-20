class Solution {
public:
    int mySqrt(int x) {
        if(x<=1) return x;
        int left=0,right=x;
        while(left<right){
            int m = left + (right - left)/2;
            if(x/m >= m) left = m+1;
            else right = m;
        }
        return right-1;
    }
};