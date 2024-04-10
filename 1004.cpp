class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int i=0;
        int j=0;
        int n=nums.size();
        int ans=INT_MIN;
        int zero=0;
        while(j<n){
            if(nums[j]==0) zero++;
            while(zero>k){
                if(nums[i]==0){
                    zero--;
                }
                i++;
            }
            ans=max(ans,j-i+1);
            j++;
        }
        return ans;
    }
};
