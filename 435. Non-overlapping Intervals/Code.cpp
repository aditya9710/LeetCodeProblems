class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        int count = 0;
        int prev_interval = intervals[0][1];

        for (int i = 1; i < intervals.size(); ++i) {
            if (intervals[i][0] >= prev_interval) prev_interval = intervals[i][1];
            else {
                count++;
                prev_interval = min(prev_interval, intervals[i][1]);
            }
        }
        return count;
    }
};
