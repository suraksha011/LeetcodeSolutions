class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int sum=0;
        int n=nums.size();
        int leftsum=0;
        int rightsum=0;
        vector<int> answer(n,0);
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        for(int i=0;i<n;i++){
            leftsum+=nums[i];
            rightsum=sum-leftsum+nums[i];
            answer[i]=abs(leftsum-rightsum);
        }
        return answer;
    }
};
