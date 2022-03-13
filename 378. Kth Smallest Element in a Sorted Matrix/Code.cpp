class Solution {
public:
    int myCount(int num, vector<vector<int>>& matrix) {
        int n = matrix.size();
        int row = 0, col = n-1, count = 0;
        
        while (row < n and col >= 0){
            if (matrix[row][col] <= num) {
                count += col+1;
                row++;
            }
            else col -= 1;
        }
        return count;
    }
    
    
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n = matrix.size();
        int matrix_min = matrix[0][0], matrix_max = matrix[n-1][n-1];
        
        while (matrix_min < matrix_max) {
            int mid = matrix_min + (matrix_max-matrix_min)/2;
            if (myCount(mid, matrix) < k)
                matrix_min = mid+1;
            else
                matrix_max = mid;
        }
        return matrix_max;
    }
};
