class Solution {
public:
    int rows, cols;
    int numIslands(vector<vector<char>>& grid) {
        if(grid.size() == 0) return 0;

        rows = grid.size(), cols = grid[0].size();
        int nLands = 0;
        
        for (int i = 0; i < rows; ++i)
            for (int j = 0; j < cols; ++j)
                if (grid[i][j] == '1') {
                    nLands++;
                    bfs(grid, i, j);
                }
        return nLands;
    }
    
    void bfs(vector<vector<char>>& grid, int i, int j) {
        queue<pair<int, int>> q;
        for (grid[i][j] = '0', q.emplace(i, j); !q.empty(); q.pop()) {
            i = q.front().first, j = q.front().second;
            if (i > 0      && grid[i-1][j] == '1') q.emplace(i-1, j), grid[i-1][j] = '0';
            if (i+1 < rows && grid[i+1][j] == '1') q.emplace(i+1, j), grid[i+1][j] = '0';
            if (j > 0      && grid[i][j-1] == '1') q.emplace(i, j-1), grid[i][j-1] = '0';
            if (j+1 < cols && grid[i][j+1] == '1') q.emplace(i, j+1), grid[i][j+1] = '0';
        }
    }
};
