class Solution {
private:
void dfs(vector<vector<char>>& board, int r, int c, int num_rows, int num_cols) {
    if(r < 0 || r >= num_rows || c < 0 || c >= num_cols || board[r][c] != 'O') return;

    board[r][c] = 'T';

    dfs(board, r + 1, c, num_rows, num_cols);
    dfs(board, r - 1, c, num_rows, num_cols);
    dfs(board, r, c + 1, num_rows, num_cols);
    dfs(board, r, c - 1, num_rows, num_cols);
}
public:
    void solve(vector<vector<char>>& board) {
        int num_rows = board.size();
        int num_cols = board[0].size();

        for(int r = 0; r < num_rows; ++r) {
            for (int c = 0; c < num_cols; ++c) {
                if (r == 0 || r == num_rows-1 || c == 0 || c == num_cols-1)
                    dfs(board, r, c, num_rows, num_cols);
            }
        }

        for(int r = 0; r < num_rows; ++r) {
            for (int c = 0; c < num_cols; ++c) {
                if (board[r][c] == 'O') 
                    board[r][c] = 'X';
                if (board[r][c] == 'T') 
                    board[r][c] = 'O';
            }
        }
    }
};
