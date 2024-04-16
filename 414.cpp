class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int len=nums.size();
        vector<int> unq;
        int max=INT_MAX;
        if(len==1) return nums[0];
        sort(nums.begin(),nums.end());
        int k=0;
        if(len>2){
            for(int i=0;i<len;i++){
                if(i==0 || nums[i]!=unq[k-1]){
                    unq.push_back(nums[i]);
                    k++;
                }
            }
            if(unq.size()>2)
                return unq[k-3];
        }
        return nums[len-1];
    }
};
