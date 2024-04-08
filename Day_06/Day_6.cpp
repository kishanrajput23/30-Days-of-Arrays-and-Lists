vector<int> Solution::getRow(int A) {
    vector<int> v;
    long long ans = 1;
    v.push_back(ans);
    for (int i=1; i<A+1; i++) {
        ans = ans * (A+1-i) ;
        ans = ans / i;
        v.push_back(ans) ;
    }
    return v;
}