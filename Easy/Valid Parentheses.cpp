class Solution {
public:
    bool isValid(string s) {
        int k=1;
 
        while(k==1){
           k=2;

            if (s.size() < 2)
                break;


        for(int i=0;i<s.size()-1;i++){
            if ((s[i] == '{' and s[i+1] == '}') or
                (s[i] == '[' and s[i+1] == ']') or
                (s[i] == '(' and s[i+1] == ')')) {

            s.erase(i, 2);
            k=1;
            break;}

            
        }}

        if(s!=""){
            return false;
        }


    return true;

    }
};



