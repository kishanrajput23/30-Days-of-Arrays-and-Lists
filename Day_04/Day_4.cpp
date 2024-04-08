int Solution:: solve (vector<int > &A) {
    int count = 0;
    for (int i=0; i<A.size()-1; i++) {
        if (A[i]%2 == A[i+1]%2) {
            count++;
        }
    }
    return A.size()-count;
}