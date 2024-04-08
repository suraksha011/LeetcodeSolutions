class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n=nums.size();
        int a=INT_MAX;
        int b=INT_MAX;
        if(n<3) return false;
        for(int i=0;i<n;i++){
            if(nums[i]>b) return true;
            if(nums[i]>a) b=nums[i];
            if(nums[i]<a) a=nums[i];
        }
        return false;
    }
};
