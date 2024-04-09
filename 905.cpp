class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        int j=0;
        if(n==0 || n==1){
            return nums;
        }
        while(j<n){
            if(nums[j]%2!=0){
                j++;
            }
            else{
                swap(nums[i],nums[j]);
                i++;
                j++;
            }
        }
        return nums;
    }
};
