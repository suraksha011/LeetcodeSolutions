class Solution {
public:
    bool closeStrings(string word1, string word2) {
        vector<int> freqW1(26,0),freqW2(26,0);
        vector<int> ispresentW1(26,0), ispresentW2(26,0);
        for(char c:word1){
            freqW1[c-'a']++;
            ispresentW1[c-'a']=1;
        }
        for(char c:word2){
            freqW2[c-'a']++;
            ispresentW2[c-'a']=1;
        }
        sort(freqW1.begin(),freqW1.end());
        sort(freqW2.begin(),freqW2.end());
        return freqW1==freqW2 && ispresentW1==ispresentW2;
    }
};
