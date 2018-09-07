class Solution {
public:
    int reverse(int x) {
        int b=0;
        while(x!=0){
            int pop = x%10;
            x /= 10;
            if(b>(pow(2,31)-1)/10||(b==(pow(2,31)-1)/10&&pop>7)) return 0;
            if(b<(-pow(2,31)/10)||(b==(-pow(2,31)/10)&&pop<-8)) return 0;
            b= b*10 + pop;
        }

        return b;
    }
};