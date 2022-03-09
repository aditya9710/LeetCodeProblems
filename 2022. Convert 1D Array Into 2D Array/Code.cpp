class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>> result;
        if (original.size() != m*n) return result;
        
        vector<int> row;
        int count = 0;
        for(int i = 0; i <m; i++) {
            for(int j = 0; j<n; j++) {
                row.push_back(original[count]);
                count++;
            }
            result.push_back(row);
            row.clear();
        }
        return result;
    }
};
