class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        int arr[101]={0};
        int maxyear=1950;
        int max=0;
        for(auto log:logs){
            for(int j=log[0];j<log[1];j++){
                arr[j-1950]++;
            }
        }
        for(int i=0;i<101;i++){
            if(max<arr[i]){
                max=arr[i];
                maxyear=i+1950;
            }
        }
        return maxyear;
    }
};
