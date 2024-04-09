class Solution {
public:
    vector<int> diStringMatch(string s) {
        vector<int> result;
        int left=0;
        int right=s.length();
        for(int i=0;i<s.length()+1;i++){
            if(s[i]=='I'){
                result.push_back(left);
                left++;
            }
            else if(s[i]=='D'){
                result.push_back(right);
                right--;
            }
            else{
                result.push_back(right);
                right--;
            }

        }return result;
    }        
    };
