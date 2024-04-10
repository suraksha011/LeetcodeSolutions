class Solution {
public:
    int maxVowels(string s, int k) {
        int vow=0;
        int res=0;
    
        for(int i=0;i<s.length();i++){
            
            if(s[i]=='a' || s[i]=='e' ||s[i]=='i' ||s[i]=='o' || s[i]=='u')
                vow++;
            if(i-k>=0)
                if(s[i-k]=='a'||s[i-k]=='e'||s[i-k]=='i'||s[i-k]=='o'||s[i-k]=='u')
                    vow--;
            
            
            if(vow>res) res=vow;
        }
        return res;
    }
};
