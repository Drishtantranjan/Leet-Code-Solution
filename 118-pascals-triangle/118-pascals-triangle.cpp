class Solution {
public:
   vector<vector<int>> generate(int numRows) {
    vector<vector<int>> vec(numRows);
    for(int i=0;i<numRows;i++){
        vec[i] = vector<int> (i+1);
        for(int j=0;j<=i;j++){
            if(j==0 || j==i)
                vec[i][j] = 1;
            else{
                vec[i][j] = vec[i-1][j-1] + vec[i-1][j];
            }
        }
    }
    return vec;
}
};