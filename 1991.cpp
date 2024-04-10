class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int sum=0;
        int n=nums.size();
        int leftsum=0;
        int rightsum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        for(int i=0;i<n;i++){
            leftsum+=nums[i];
            rightsum=sum-leftsum+nums[i];
            if(leftsum==rightsum) return i;
        }
        return -1;
    }
};
