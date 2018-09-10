class Solution {
public:
    bool isValid(string s) {
        if(s.length()==0) return true;
        if(s[0]==')'||s[0]=='}'||s[0]==']') return false;
        stack<char> str;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                str.push(')');
            }else if(s[i]=='{'){
                str.push('}');
            }else if(s[i]=='['){
                str.push(']');
            }else {
                if(str.empty()||str.top()!=s[i])
                    return false;
                str.pop();
                
            }
        }
        return str.empty();
    }
};