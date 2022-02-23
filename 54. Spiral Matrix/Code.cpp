class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> result;
        
        int left = 0, right = matrix[0].size(), top = 0, bottom = matrix.size();
        while (left < right && top < bottom) {
            // Every top row
            for (int i = left; i<right; i++) {
                result.push_back(matrix[top][i]);
            }
            top += 1;
            
            // Every right column
            for (int i = top; i<bottom; i++) {
                result.push_back(matrix[i][right-1]);
            }
            right -= 1;
            
            // Condition for vectors
            if (left >= right || top >= bottom)
                break;
            
            // Every bottom row
            for (int i = right-1; i>left; i--){
                result.push_back(matrix[bottom-1][i]);
            }
            bottom -= 1;
            
            // Every left column
            for (int i = bottom; i>=top; i--) {
                result.push_back(matrix[i][left]);
            }
            left += 1;
        }
        return result;
    }
};
