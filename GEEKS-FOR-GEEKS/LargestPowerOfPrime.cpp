//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
    int largestPowerOfPrime(int N, int p) {
        // code here
        int res = 0;
        while (N) {
            N /= p;
            res += N;
        }
        return res;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, p;

        cin >> N >> p;

        Solution ob;
        cout << ob.largestPowerOfPrime(N, p) << endl;

        cout << "~" << "\n";
    }
    return 0;
}
// } Driver Code Ends