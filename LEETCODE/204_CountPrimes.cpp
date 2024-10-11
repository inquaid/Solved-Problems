#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int seive(int N) {
        vector<int> primes(N + 5, 0);
        int cnt = 0;
        for (int i = 2; i < N; i++) {
            if (primes[i] == 0) {
                cnt++;
                for (int j = 2 * i; j < N; j += i) {
                    primes[j] = -1;
                }
            }
        }
        return cnt;
    }

    int countPrimes(int n) {
        // N = n + 5;
        // seive();
        // int l = lower_bound(pr.begin(), pr.end(), n) - pr.begin();
        return seive(n);
    }
};

int main() {
    Solution s;
    int temp = s.countPrimes(499979);
    cout << temp;
}