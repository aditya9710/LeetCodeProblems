class Solution {
public:
    int swimInWater(vector<vector<int>>& grid) {
        int n = grid.size();
        if (n == 1) return 0;

        vector<vector<bool>> visited(n, vector<bool>(n));
        visited[0][0] = true;
        int result = max(grid[0][0], grid[n - 1][n - 1]);

        priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> min_height;
        min_height.push({result, 0, 0});
        vector<vector<int>> directions {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
        
        while (!min_height.empty()) {
            vector<int> curr = min_height.top();
            min_height.pop();
            result = max(result, curr[0]);

            for (int i = 0; i < directions.size(); ++i) {
                int x = curr[1] + directions[i][0];
                int y = curr[2] + directions[i][1];

                if (x < 0 || x >= n || y < 0 || y >= n || visited[x][y]) continue;
                if (x == n-1 && y == n-1) return result;

                min_height.push({grid[x][y], x, y});
                visited[x][y] = true;
            }
        }
        return -1;
    }
};
