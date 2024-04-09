class Solution {
public:
    int strStr(string haystack, string needle) {
        int m=haystack.length();
        int n=needle.length();
        int i=0;
        int j=0;
        for(int i=0;i<m-n+1;i++)
            if(haystack.substr(i,n)==needle)
                return i;
        return -1;
        }
    
};
