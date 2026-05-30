class Solution {
public:
    int numberOfSpecialChars(string word) {
        int ans=0;
            for(char ch = 'a'; ch <= 'z'; ch++) {
            if(word.find(ch) != string::npos &&
               word.find(ch - 32) != string::npos) {
                ans++;
            }
        }
    return ans;}
};
