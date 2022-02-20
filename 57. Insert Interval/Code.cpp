class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> result;
        int i = 0, n = intervals.size();
        while(i < n && intervals[i][1] < newInterval[0]) result.push_back(intervals[i++]);
        
        vector<int> mergedInterval = newInterval;
        while(i < n && intervals[i][0] <= newInterval[1]) {
            mergedInterval[0] = min(mergedInterval[0], intervals[i][0]);
            mergedInterval[1] = max(mergedInterval[1], intervals[i++][1]);
        }
        result.push_back(mergedInterval);
        
        while(i < n) result.push_back(intervals[i++]);
        
        return result;
    }
};
