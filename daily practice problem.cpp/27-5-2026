class Solution {
public:
    int numberOfSpecialChars(string word) {
        int sum=0;
        for(int i=0;i<26;i++){
            if(word.find(('a'+i)) != string::npos){
                size_t pos1 = word.rfind('a'+i);
                if(word.find('A'+i) != string::npos){
                    size_t pos2 = word.find('A'+i);
                    if(pos2>pos1){
                        sum++;
                    }
                }
            }
        }
    return sum;}
};
