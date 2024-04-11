class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int sumup=0;
        int minsum=1;
        int n=nums.size();
        for(int i=0;i<n;i++){
            sumup+=nums[i];
            minsum=min(sumup,minsum);
        }
        if(minsum>0) return 1;
        return (-1*minsum+1);
    }
};
