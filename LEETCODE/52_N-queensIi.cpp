// Your C++ code goes here
// Your C++ code goes here
class Solution {
  public:
    vector<int> row, column;
    vector<pair<int, int>> diag;

    bool posibble(int i, int indx) {
        for (int j = 0; j < row.size(); j++) {
            if (abs(row[j] - i) == abs(column[j] - indx)) {
                return false;
            }
        }
        return true;
    }

    bool valid(int i, int indx) {
        if (find(row.begin(), row.end(), i) == row.end() and
            find(column.begin(), column.end(), indx) == column.end() and
            posibble(i, indx))
            return true;
        return false;
    }

    void f(vector<vector<string>> &res, vector<string> &grid, int i, int n) {
        if (i == n) {
            res.push_back(grid);
            return;
        }
        for (int indx = 0; indx < n; ++indx) {
            if (valid(i, indx)) {
                row.push_back(i);
                column.push_back(indx);

                grid[i][indx] = 'Q';

                f(res, grid, i + 1, n);

                grid[i][indx] = '.';
                row.pop_back();
                column.pop_back();
            }
        }
    }

    void makeGrid(vector<string> &grid, int n) {
        string s(n, '.');
        grid.resize(n, s);
    }

    int totalNQueens(int n) {

        vector<vector<string>> res;
        vector<string> grid;
        makeGrid(grid, n);
        f(res, grid, 0, n);
        return res.size();
    }
};