// Your C++ code goes here
class Solution {
  public:
    int f(vector<vector<char>> &board, string &word, int i, int n, int m) {
        if (i == word.size())
            return 1;
        if (n < 0 or m < 0 or n >= board.size() or m >= board[0].size())
            return 0;
        int l = n - 1, r = n + 1, u = m - 1, d = m + 1;
        if (board[n][m] != word[i]) {
            return 0;
        }
        char temp = board[n][m];
        board[n][m] = '.';
        bool found = f(board, word, i + 1, l, m) or
                     f(board, word, i + 1, r, m) or
                     f(board, word, i + 1, n, u) or f(board, word, i + 1, n, d);
        board[n][m] = temp;

        return found;
    }

    bool exist(vector<vector<char>> &board, string word) {
        // return f(board, word, 0, board.size(), board[0].size());
        for (int i = 0; i < board.size(); i++) {
            for (int j = 0; j < board[0].size(); j++) {
                if (f(board, word, 0, i, j))
                    return true;
            }
        }

        return false;
    }
};  