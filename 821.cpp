class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int len=(int )s.size();
        vector<int> ans(len,INT_MAX);
        int pos=-1;
        for(int i=0;i<len;i++){
            if(s[i]==c){
                pos=i;
            }
            if(pos!=-1){
                ans[i]=i-pos;
            }
        }
        pos=-1;
        for(int j=len-1;j>=0;j--){
            if(s[j]==c){
                pos=j;
            }
            if(pos!=-1){
                ans[j]=min(ans[j],(pos-j));
            }
        }
        return ans;
    }
};
