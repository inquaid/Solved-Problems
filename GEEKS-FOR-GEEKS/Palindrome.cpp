//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int reverse(int n, int rev) {
        if (n == 0)
            return rev;

        return reverse(n / 10, rev * 10 + n % 10);
    }

    bool isPalindrome(int n) {
        // Code here.
        return n == reverse(n, 0);
    }
};

//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        Solution ob;
        bool ans = ob.isPalindrome(n);
        cout << (ans ? "true" : "false") << "\n~\n";
    }
    return 0;
}

// } Driver Code Ends