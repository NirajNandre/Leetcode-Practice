class Solution {
public:
    bool validWordAbbreviation(string word, string abbr) {
        int n = word.length();
        int m = abbr.length();
        int i = 0, j = 0;
        while(i < n && j < m){
            if(abbr[j] == '0') return false;

            if(isalpha(abbr[j])) {
                if(word[i] == abbr[j]) {
                    i++;
                    j++;
                }else{
                    return false;
                }
            } else {
                int curr = 0; // to make a number from digit
                while(j < m && isdigit(abbr[j])) {
                    curr = curr * 10 + (abbr[j] - '0');
                    j++;
                }
                i += curr;
            }
        }
        return i == n && j == m;
    }
};