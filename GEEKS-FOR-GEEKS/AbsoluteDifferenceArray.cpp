//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    vector<int> absDifference(string &s) {
        // code here
        vector<int> res;
        int v = 0, c = 0;
        for (auto i : s) {
            if (i == 'a' or i == 'e' or i == 'i' or i == 'o' or i == 'u')
                v++;
            else
                c++;
            res.push_back(abs(v - c));
        }
        return res;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        vector<int> ans = ob.absDifference(s);
        for (auto &it : ans)
            cout << it << " ";
        cout << endl;
    }
}

// } Driver Code Ends