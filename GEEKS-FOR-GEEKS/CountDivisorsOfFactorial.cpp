//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<int> primes;
    void seive(int N) {
        vector<int> isP(N + 1, 1);
        isP[0] = isP[1] = 0;
        for (int i = 2; i <= N; i++) {
            if (isP[i]) {
                primes.push_back(i);
                for (int j = i * i; j <= N; j += i) {
                    isP[j] = 0;
                }
            }
        }
    }
    long long fact_pow(long long n, long long k) {
        long long res = 0;
        while (n) {
            n /= k;
            res += n;
        }
        return res;
    }
    long long totalDivisors(int N) {
        // code here
        seive(1000);
        long long res = 1;
        for (auto i : primes) {
            if (i > N)
                break;
            int temp = fact_pow(N, i);
            res = (res * (temp + 1));
        }

        return res;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        Solution ob;
        cout << ob.totalDivisors(N) << "\n";

        cout << "~" << "\n";
    }
    return 0;
}
// } Driver Code Ends