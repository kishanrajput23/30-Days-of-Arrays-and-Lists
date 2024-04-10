/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
vector<Interval> Solution::insert(vector<Interval> &intervals, Interval newInterval) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int n = intervals.size();
    vector<Interval> ans;
    int i = 0;
    
    while (i < n) {
        if (intervals[i].end < newInterval.start) {
            ans.push_back(intervals[i]);
        }
        else if (intervals[i].start > newInterval.end) {
            break;
        }
        else {
            newInterval.start = min(newInterval.start, intervals[i].start);
            newInterval.end = max(newInterval.end, intervals[i].end);
        }
        i++;
    }
    
    ans.push_back(newInterval);
    
    while (i<n) {
        ans.push_back(intervals[i]);
        i++;
    }
    
    return ans;
}
