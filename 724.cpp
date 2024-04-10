class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum=0;
        int n=nums.size();
        int leftsum=0;
        int rightsum=0;
        for(int i=0;i<n;i++){
            sum=sum+nums[i];
        }
        for(int i=0;i<n;i++){
            leftsum=leftsum+nums[i];
            rightsum=sum-leftsum+nums[i];
            if(leftsum==rightsum) return i;
            
        }
        return -1;
    }
};
