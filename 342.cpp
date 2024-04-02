class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<=0){
            return 0;
        }
        while(n>3){
            if(n%4!=0){
                return 0;
            }
        n/=4;
    }return n==1;
    }
