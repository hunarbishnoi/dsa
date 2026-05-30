class Solution {
public:
    int lengthOfLastWord(string s) {
        int i,j,n=0;
    if(s.size()==1){
        return(1);
    }

    else{
    reverse(s.begin(), s.end());
   s = s + " ";

    for(i=0;i<=s.size()-1;i++){
        if(s[i]!=' '){
            n=i;
            break;}
        else{
            n=0;
        }
    }
    for(j=1;j<=s.size()-1;j++){
            if(s[j]==' ' and s[j-1]!= ' '){
                return(j-n);}         
        
        
    }}
    return(0);}

};
