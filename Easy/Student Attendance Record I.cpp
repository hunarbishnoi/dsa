class Solution {
public:
    bool checkRecord(string s) {
        int t=0,a=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='A'){
                a++;
            if(a==2){
            return false;
        }
        continue;}
            if(s[i]=='L'){
                t++;
                if(t==3){
                    return false;
                }
                if(i!=s.size()-1 and s[i+1] !='L'){
                    t=0;
                }
            }
        }
      
    return true;}
};
