int Solution::maxProfit(const vector<int> &A) {
    int minPrice = INT_MAX;
    int maxProfit = 0;

    for (int i=0; i<A.size(); i++) {
        minPrice = min(A[i], minPrice),
        maxProfit = max(maxProfit, A[i]-minPrice) ;
    }
    return maxProfit;
}