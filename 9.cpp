class Solution {
public:
    bool isPalindrome(int x) {
        int rem,rev=0;
        int a=x;
        if(x<0) return 0;
        while(a){
            rem=a%10;
             a/=10;
             if(rev>INT_MAX/10) return 0;
            rev=rev*10+rem;
           
        };
        if(rev==x){
            return 1;
        }
        else{return 0;}
    }
};
