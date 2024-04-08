class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0;
        int j=0;
        while(i<s.length() && j<t.length()){
            if(t[j]==s[i]) i++;
            j++;
            
        }
        if(i==s.length()) return true;
        else return false;
    }
};
