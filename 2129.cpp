class Solution {
public:
    string capitalizeTitle(string title) {
        int len = title.length();
        int start = 0;
        int end = 0;
        for(int i = 0; i < len; i++) {
            if (title.at(i) == ' ') {
                end = i-1;
                if (end - start <= 1) {
                    for(int j=start; j<=end; j++)
                        title.at(j) = tolower(title.at(j));
                }
                else {
                    title.at(start) = toupper(title.at(start));
                    for(int j=start+1; j<=end; j++)
                        title.at(j) = tolower(title.at(j));
                }
                start = i + 1;
            }
            if (i == len-1) {
                end = len -1;
                if (end - start <= 1) {
                    for(int j=start; j<=end; j++)
                        title.at(j) = tolower(title.at(j));
                }
                else {
                    title.at(start) = toupper(title.at(start));
                    for(int j=start+1; j<=end; j++)
                        title.at(j) = tolower(title.at(j));
                }
            }
        }
        return title;
    }
};
