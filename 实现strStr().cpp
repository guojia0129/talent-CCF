class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle=="") return 0;
        int l1 = haystack.length();
        int l2 = needle.length();
        for(int i = 0;i<l1;i++){
            if((i+l2)>l1) return -1;
            if(haystack[i] == needle[0]){
                int j ;
                for(j = 1;j<needle.size();j++){
                    if(needle[j] != haystack[i+j]) break;
                }
                if(j == l2) return i;
            }
        }
        return -1;
    }
};