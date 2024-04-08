int Solution::solve(vector<int> &A) {
    
    int a = min_element(A.begin(), A.end());
    int b = max_element(A.begin(), A.end());
    int count = 0;
    
    for(int i = 0; i < A.size(); i++) {
        if(A[i] > a && A[i] < b) {
            count++;
        }
    }
    return count;
}