class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        vector<vector<int>> h(n, vector<int>(n));
        int k=0,t=0;
        for(int j=0;j<=n-1;j++){
            t=0;
            for(int i=n-1;i>=0;i--){
                h[k][t]=matrix[i][j];
                t++;}
            k++;}
    matrix=h;}
};
