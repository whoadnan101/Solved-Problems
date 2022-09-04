//Diagonal Difference
int diagonalDifference(vector<vector<int>> arr) {
int row=arr.size();
int col=arr[0].size();
int diag1=0;
int diag2=0;
for(int i=0;i<row;i++){
    diag1+=arr[i][i];
    diag2+=arr[i][col-1-i];
}
return abs(diag1-diag2);
}