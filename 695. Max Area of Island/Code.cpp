class Solution {
private:
    int dfs(vector<vector<int>>& grid, int r, int c, int num_rows, int num_cols) {
        if (r < 0 or r == num_rows or c < 0 or c == num_cols or grid[r][c] == 0) return 0;
        grid[r][c] = 0;
        
        return (1 + dfs(grid, r + 1, c, num_rows, num_cols)
                  + dfs(grid, r - 1, c, num_rows, num_cols)
                  + dfs(grid, r, c + 1, num_rows, num_cols)
                  + dfs(grid, r, c - 1, num_rows, num_cols));
    }
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int num_rows = grid.size();
        int num_cols = grid[0].size();
        int area = 0;
        for(int r = 0; r < num_rows; ++r) {
            for (int c = 0; c < num_cols; ++c) {
                if (grid[r][c] == 1)
                    area = max(area, dfs(grid, r, c, num_rows, num_cols));
            }
        }

        return area;
    }
};
