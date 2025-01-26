// Your C++ code goes here
class Solution {
  public:
    int dp[500][500];
    int f(int i, int j, int row, int col, vector<vector<int>> &mtx) {
        if (dp[i][j] != -1) return dp[i][j];
        if (i == row - 1 and j == col - 1) return mtx[i][j];
        else if (i < row and j < col) return dp[i][j] = mtx[i][j] + min(f(i + 1, j, row, col, mtx), f(i, j + 1, row, col, mtx));
        else return INT_MAX;
    }
    int minPathSum(vector<vector<int>> &grid) {
        memset(dp, -1, sizeof(dp));
        return f(0, 0, grid.size(), grid[0].size(), grid);
    }
};