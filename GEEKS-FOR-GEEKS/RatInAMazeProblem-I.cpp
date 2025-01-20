//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    void f(vector<vector<int>> &mat, vector<string> &res, string &s, int row,
           int col, int n) {

        if (row == n - 1 and col == n - 1) {
            res.push_back(s);
            return;
        }

        if (col + 1 < n and mat[row][col + 1]) {
            s += "R";
            mat[row][col] = 0;
            f(mat, res, s, row, col + 1, n);
            mat[row][col] = 1;
            s.pop_back();
        }
        if (row + 1 < n and mat[row + 1][col]) {
            s += "D";
            mat[row][col] = 0;
            f(mat, res, s, row + 1, col, n);
            mat[row][col] = 1;
            s.pop_back();
        }
        if (col - 1 >= 0 and mat[row][col - 1]) {
            s += "L";
            mat[row][col] = 0;
            f(mat, res, s, row, col - 1, n);
            mat[row][col] = 1;
            s.pop_back();
        }
        if (row - 1 >= 0 and mat[row - 1][col]) {
            s += "U";
            mat[row][col] = 0;
            f(mat, res, s, row - 1, col, n);
            mat[row][col] = 1;
            s.pop_back();
        }
        return;
    }

    vector<string> findPath(vector<vector<int>> &mat) {
        // code here
        vector<string> res;
        string s = "";
        int n = mat.size();
        f(mat, res, s, 0, 0, n);
        return res;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        getline(cin, input);
        vector<vector<int>> mat;
        string innerArray;
        bool isInsideArray = false;

        for (char c : input) {
            if (c == '[') {
                if (isInsideArray) {
                    innerArray.clear();
                }
                isInsideArray = true;
            } else if (c == ']') {
                if (isInsideArray && !innerArray.empty()) {
                    vector<int> row;
                    stringstream ss(innerArray);
                    int num;

                    while (ss >> num) {
                        row.push_back(num);
                        if (ss.peek() == ',')
                            ss.ignore();
                        while (isspace(ss.peek()))
                            ss.ignore();
                    }

                    mat.push_back(row);
                    innerArray.clear();
                }
                isInsideArray = false;
            } else if (isInsideArray) {
                if (!isspace(c)) {
                    innerArray += c;
                }
            }
        }

        Solution obj;
        vector<string> result = obj.findPath(mat);
        sort(result.begin(), result.end());

        if (result.empty())
            cout << "[]";
        else
            for (int i = 0; i < result.size(); i++)
                cout << result[i] << " ";
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends