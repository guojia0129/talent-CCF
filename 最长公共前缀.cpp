class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s = "";
        if(strs.size()==0) return s;
        int len = strs[0].length();
        
        for(int i=0;i<strs.size();i++){
            if(strs[i].length()<len)
                len = strs[i].length();
        }
        for(int i=0;i<len;i++){
            bool a = true;
            for(int j=1;j<strs.size();j++){
                if(strs[j][i] != strs[j-1][i]){
                    a = false;
                    return s;
                }
                
            }
            if(a==true){
                s += strs[0][i];
            }
        }
        
        return s;
    }
};