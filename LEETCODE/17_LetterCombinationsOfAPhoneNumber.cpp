// Your C++ code goes here
class Solution {
  public:
    vector<string> numpad{"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

    void f(string s, string temp, int i, int n, vector<string> &v) {
        if (i == n) {
            v.push_back(temp);
            return;
        }
        for (int indx = 0; indx < numpad[s[i] - '0'].size(); ++indx) {
            temp += numpad[s[i] - '0'][indx];
            f(s, temp, i + 1, n, v);
            temp.pop_back();
        }
    }

    vector<string> letterCombinations(string digits) {
        vector<string> v;
        if (digits.size() == 0) {
            return v;
        }
        string temp;
        f(digits, temp, 0, digits.size(), v);
        return v;
    }
};