class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0||(x%10==0&&x!=0)) return false;
        int nex=0;
        while(nex<x){
            nex = nex*10 + x%10;
            x /= 10;
        }
        return x==nex || x==nex/10;
    }
};