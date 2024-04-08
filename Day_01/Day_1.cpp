int Solution::solve(vector<int> &A) {
    int ans = 0;
    for (int i=0; i<A.size(); i++) {
        for (int j=0; j<A.size(); j++) {
            if (A[j] != 0) {
                ans = max(ans, A[i]%A[j]);
            }
        }
    }
    return ans;
}
