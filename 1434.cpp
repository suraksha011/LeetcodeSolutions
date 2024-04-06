class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n=candies.size();
        int max=*max_element(begin(candies),end(candies));
        vector<bool> res(n,false);
        for(int i=0;i<n;i++){
            if(extraCandies+candies[i]>=max){
                res[i]=true;
            }
        }return res;
        
    }
};
