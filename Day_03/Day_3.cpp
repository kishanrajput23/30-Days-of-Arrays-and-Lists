int Solution::solve(vector<int > &A) {
    int even = 0;
    int odd = 0;
    for (auto i : A) {
        if (i%2==0){
            even++;
        }
        else {
            odd++;
        }
    }
    return min (even, odd) ;
}