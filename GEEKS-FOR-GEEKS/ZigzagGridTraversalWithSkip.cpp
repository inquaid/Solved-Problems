// Your C++ code goes here
class Solution {
  public:
    vector<int> zigzagTraversal(vector<vector<int>> &grid) {
        vector<int> res;
        int row = grid.size(), col = grid[0].size(), i = 0, j = 0;
        bool lTr = true;
        for (int i = 0; i < row; i++) {
            if (lTr) {
                for (int j = 0; j < col; j += 2) {
                    res.push_back(grid[i][j]);
                }
                lTr = false;
            } else {
                int j = col - 1;
                if (col % 2 != 0) {
                    j--;
                }

                for (; j > 0; j -= 2) {
                    res.push_back(grid[i][j]);
                }

                lTr = true;
            }
        }
        return res;
    }
};  