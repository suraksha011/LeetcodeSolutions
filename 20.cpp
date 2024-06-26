class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        int len=s.length();
        for(int i=0;i<len;i++){
            if(s[i]=='(' || s[i]=='[' || s[i]=='{' ) st.push(s[i]);
            else if( s[i]=='}' || s[i]==')' || s[i]==']'){
                if(st.empty()) return false;
                else if(st.top()!='(' && s[i]==')') return false;
                else if(st.top()!='[' && s[i]==']') return false;
                else if(st.top()!='{' && s[i]=='}') return false;
                else st.pop();
                
            }
        }
        if(st.empty()) return true;
        else return false;
    }
};
