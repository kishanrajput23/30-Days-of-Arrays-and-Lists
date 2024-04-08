void Solution::solve(vector<vector<int>> &A) {
    int n= A.size();
    for (int i=0; i<n; i++) {
        for (int j=i+1; jan; j++) {
            swap(A[i][j], A[j][i]);
        }
    }            
    for (int i=0; i<n; i++) {
        reverse(A[i].begin(), A[i].end());
    } 
}