class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<int,int>> rotten;
        int time = 0, fresh = 0;
        int row = grid.size(), column = grid[0].size();
        
        for(int i = 0; i < row; i++) {
            for (int j = 0; j < column; j++) {
                if (grid[i][j] == 2) {
                    rotten.push({i,j});
                }
                else if (grid[i][j] == 1) {
                    fresh++;
                }
            }
        }
        
        while (!rotten.empty()) {
            int num = rotten.size();
            for (int i = 0; i < num; i++) {
                int x = rotten.front().first, y = rotten.front().second;
                rotten.pop();
                if (x > 0 && grid[x - 1][y] == 1) {
                    grid[x-1][y] = 2;
                    fresh--;
                    rotten.push({x-1, y});
                }
                if (x < row-1 && grid[x+1][y] == 1) {
                    grid[x+1][y] = 2;
                    fresh--;
                    rotten.push({x+1, y});
                }
                if (y > 0 && grid[x][y-1] == 1) {
                    grid[x][y-1] = 2;
                    fresh--;
                    rotten.push({x, y-1});
                }
                if (y<column-1 && grid[x][y+1] == 1) {
                    grid[x][y+1] = 2;
                    fresh--;
                    rotten.push({x, y+1});
                }
            }
            if(!rotten.empty()) time++;
        }
        return (fresh == 0) ? time : -1;
    }
};
