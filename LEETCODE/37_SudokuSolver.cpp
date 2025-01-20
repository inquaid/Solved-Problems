// Your C++ code goes here
class Solution {
  public:
    bool isValid(vector<vector<char>> &board, int row, int col, char digit) {
        for (int i = 0; i < 9; i++) {
            if (board[row][i] == digit or board[i][col] == digit)
                return false;
        }

        int n = floor(row / 3.0) * 3;
        int m = floor(col / 3.0) * 3;
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                if (board[i + n][j + m] == digit) {
                    return false;
                }
            }
        }
        return true;
    }

    void sudoku(vector<vector<char>> &res, vector<vector<char>> &board, int row,
                int col) {
        if (row == 9) {
            res = board;
            return;
        }
        if (col == 9) {
            sudoku(res, board, row + 1, 0);
            return;
        }
        if (board[row][col] == '.') {
            for (char digit = '1'; digit <= '9'; digit++) {
                if (isValid(board, row, col, digit)) {
                    board[row][col] = digit;
                    sudoku(res, board, row, col + 1);
                    board[row][col] = '.';
                }
            }
        } else {
            sudoku(res, board, row, col + 1);
        }
    }

    void solveSudoku(vector<vector<char>> &board) {
        vector<vector<char>> res = board;
        sudoku(res, board, 0, 0);
        board = res;
    }
};

// Your C++ code goes here second solution
class Solution {
  public:
    int isValid(vector<vector<char>> &board, vector<vector<int>> &ROW,
                vector<vector<int>> &COL, vector<vector<int>> &BOX, int row,
                int col, char digit) {
        int d = digit - '1', k = (row / 3) * 3 + (col / 3);
        return !ROW[row][d] and !COL[col][d] and !BOX[k][d];
    }

    int sudoku(vector<vector<char>> &board, vector<vector<int>> &ROW,
               vector<vector<int>> &COL, vector<vector<int>> &BOX, int row,
               int col) {
        if (row == 9) {
            // res = board;
            return 1;
        }
        if (col == 9) {
            return sudoku(board, ROW, COL, BOX, row + 1, 0);
        }
        if (board[row][col] == '.') {
            for (char digit = '1'; digit <= '9'; digit++) {
                if (isValid(board, ROW, COL, BOX, row, col, digit)) {
                    int d = digit - '1', k = (row / 3) * 3 + (col / 3);
                    board[row][col] = digit;
                    ROW[row][d] = COL[col][d] = BOX[k][d] = 1;

                    if (sudoku(board, ROW, COL, BOX, row, col + 1))
                        return 1;

                    board[row][col] = '.';
                    ROW[row][d] = COL[col][d] = BOX[k][d] = 0;
                }
            }
            return 0;
        } else {
            return sudoku(board, ROW, COL, BOX, row, col + 1);
        }
    }

    void solveSudoku(vector<vector<char>> &board) {

        vector<vector<char>> res = board;
        vector<vector<int>> ROW(9, vector<int>(9, 0));
        vector<vector<int>> COL(9, vector<int>(9, 0));
        vector<vector<int>> BOX(9, vector<int>(9, 0));

        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (board[i][j] != '.') {
                    int digit = board[i][j] - '1';
                    ROW[i][digit] = 1;
                    COL[j][digit] = 1;
                    int n_m = (i / 3) * 3 + (j / 3);
                    BOX[n_m][digit] = 1;
                }
            }
        }
        sudoku(board, ROW, COL, BOX, 0, 0);
    }
};

// thrid solution
class Solution {
public:
    bool sudoku(vector<vector<char>> &board, vector<int> &ROW, vector<int> &COL, vector<int> &BOX, int row, int col) {
        if (row == 9) return true; 

        if (col == 9) return sudoku(board, ROW, COL, BOX, row + 1, 0); 

        if (board[row][col] != '.') return sudoku(board, ROW, COL, BOX, row, col + 1); 

        int boxIndex = (row / 3) * 3 + (col / 3);

        for (int d = 1; d <= 9; ++d) {
            int bit = 1 << d;
            if (!(ROW[row] & bit) && !(COL[col] & bit) && !(BOX[boxIndex] & bit)) {

                board[row][col] = '0' + d;
                ROW[row] |= bit;
                COL[col] |= bit;
                BOX[boxIndex] |= bit;

                if (sudoku(board, ROW, COL, BOX, row, col + 1)) return true;

                board[row][col] = '.';
                ROW[row] &= ~bit;
                COL[col] &= ~bit;
                BOX[boxIndex] &= ~bit;
            }
        }

        return false; 
    }

    void solveSudoku(vector<vector<char>> &board) {
        vector<int> ROW(9, 0), COL(9, 0), BOX(9, 0); 

        for (int i = 0; i < 9; ++i) {
            for (int j = 0; j < 9; ++j) {
                if (board[i][j] != '.') {
                    int d = board[i][j] - '0';
                    int bit = 1 << d;
                    int boxIndex = (i / 3) * 3 + (j / 3);
                    ROW[i] |= bit;
                    COL[j] |= bit;
                    BOX[boxIndex] |= bit;
                }
            }
        }

        sudoku(board, ROW, COL, BOX, 0, 0);
    }
};
