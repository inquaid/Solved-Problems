// Your C++ code goes here
class Solution {
  public:
    vector<vector<int>> generate(int numRows) {
        int n = numRows;
        vector<vector<int>> v(n + 1);
        v[0].push_back(1);
        for (int i = 1; i <= n; ++i) {
            for (int j = 0; j < i; ++j) {
                if (j == 0 or j == i - 1) {
                    v[i].push_back(1);
                } else {
                    v[i].push_back(v[i - 1][j - 1] + v[i - 1][j]);
                }
            }
        }
        v.erase(begin(v));
        return v;
    }
};

class Solution {
  public:
    vector<vector<int>> generate(int numRows) {
        if (numRows == 1)
            return {{1}};

        vector<vector<int>> preRow = generate(numRows - 1);

        vector<int> presentRow(numRows, 1);
        for (int i = 1; i < numRows - 1; i++) {
            presentRow[i] = preRow.back()[i - 1] + preRow.back()[i];
        }
        preRow.push_back(presentRow);
        return preRow;
    }
};