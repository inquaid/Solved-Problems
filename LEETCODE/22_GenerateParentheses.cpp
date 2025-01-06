class Solution {
  public:
    void f(int i, int n, string &s, int openning, int closing,
           vector<string> &res) {
        if (openning == 0 and closing == 0) {
            res.push_back(s);
            return;
        }
        if (openning > 0) {
            s += '(';
            f(i + 1, n, s, openning - 1, closing, res);
            s.pop_back();
        }
        if (closing > 0 and closing > openning) {
            s += ')';
            f(i + 1, n, s, openning, closing - 1, res);
            s.pop_back();
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<string> res;
        string temp = "";
        f(0, 2 * n, temp, n, n, res);
        return res;
    }
};
