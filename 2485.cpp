class Solution {
public:
    int pivotInteger(int n) {
        int sum=0;
        int leftsum=0;
        int rightsum=0;
        for(int i=1;i<=n;i++){
            sum+=i;
        }
        if(n==1){
            return 1;
        }
        for(int i=1;i<n;i++){
            leftsum+=i;
            rightsum=sum-leftsum+i;
            if(leftsum==rightsum) return i;
        }
        return -1;
    }
};
