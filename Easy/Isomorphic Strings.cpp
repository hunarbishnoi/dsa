class Solution {
public:
    bool isIsomorphic(string s, string t) {
        long long sum=0;
        for(int i=0;i<s.size();i++){
            for(int j=i+1;j<s.size();j++){
                if(s[i]==s[j]){
                    if(t[i]!=t[j]){
                        return false;
                    }
                }
                else{
                    sum++;
                }
            }
        }
        sum = (-1 + sqrt(1 + 8 * (sum))) / 2;

        if(sum+1==s.size()){
        for(int k=0;k<t.size();k++){
            for(int l=k+1;l<t.size();l++){
                if(t[k]==t[l]){
                    return false;
                }
            }
        }}


        for(int i=0;i<t.size();i++){
            for(int j=i+1;j<t.size();j++){
                if(t[i]==t[j]){
                    if(s[i]!=s[j]){
                        return false;
                    }
                }
                
            }
        }




    return true;}
};
