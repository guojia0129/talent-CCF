class Solution {
public:
    string addBinary(string a, string b) {
        int l1 = a.size();
        int l2 = b.size();
        if(l1==0) return b;
        if(l2==0) return a;
        l1--;
        l2--;
        int flag = 0;
        string resu = "";
        while(l1>=0&&l2>=0){
            int num = (a[l1]-'0') + (b[l2]-'0') + flag;
            flag = num / 2;
            num = num%2;
            resu.insert(resu.begin(),num+'0');
            l1--;
            l2--;
        }
        if(l1<0&&l2<0){
            if(flag==1){
                resu.insert(resu.begin(),flag+'0');
                return resu;
            }
                
        }
        while(l1>=0){
            int num = (a[l1]-'0')+flag;
            flag = num/2;
            num = num%2;
            resu.insert(resu.begin(),num+'0');
            l1--;
        }
        while(l2>=0){
            int num = (b[l2]-'0')+flag;
            flag = num/2;
            num = num%2;
            resu.insert(resu.begin(),num+'0');
            l2--;
        }
        if(flag==1)
            resu.insert(resu.begin(),flag+'0');
        return resu;
    }
};