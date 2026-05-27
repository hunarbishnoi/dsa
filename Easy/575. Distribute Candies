class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        sort(candyType.begin(),candyType.end());
        int sum=0;
        int n=candyType.size();
        
        for(int i=1;i<candyType.size();i++){
            if(candyType[i-1]!=candyType[i]){
                sum++;
            }
        }
        sum++;
        
        if(sum<=n/2){
            return sum;
        }
        
        if(n/2<sum){
            return n/2;
        }
    return 0;}
};
