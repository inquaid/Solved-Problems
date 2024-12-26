//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    bool isPalindrome(string &s, int i, int j) {
        while (i <= j) {
            if (s[i++] != s[j--]) {
                return false;
            }
        }
        return true;
    }

    void f(string &s, int indx, vector<string> &path,
           vector<vector<string>> &res) {
        if (indx == s.size()) {
            res.push_back(path);
            return;
        }
        for (int i = indx; i < s.size(); i++) {
            if (isPalindrome(s, indx, i)) {
                path.push_back(s.substr(indx, i - indx + 1));
                f(s, i + 1, path, res);
                path.pop_back();
            }
        }
    }

    vector<vector<string>> allPalindromicPerms(string S) {
        // code here
        vector<vector<string>> res;
        vector<string> path;

        f(S, 0, path, res);

        return res;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;

        cin >> S;

        Solution ob;
        vector<vector<string>> ptr = ob.allPalindromicPerms(S);

        for (int i = 0; i < ptr.size(); i++) {
            for (int j = 0; j < ptr[i].size(); j++) {
                cout << ptr[i][j] << " ";
            }
            cout << endl;
        }

        cout << "~" << "\n";
    }
    return 0;
}
// } Driver Code Ends