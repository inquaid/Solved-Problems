#include <bits/stdc++.h>
using namespace std;

const int N = 1000001;
vector<int> lp(N + 1);
vector<int> pr;

void seive() {
    for (int i = 2; i <= N; ++i) {
        if (lp[i] == 0) {
            lp[i] = i;
            pr.push_back(i);
        }
        for (int j = 0; i * pr[j] <= N; ++j) {
            lp[i * pr[j]] = pr[j];
            if (pr[j] == lp[i]) {
                break;
            }
        }
    }
}

int isAllDigitPrime(int n) {
    if (n == 0 or lp[n] != n)
        return false;
    int div = 10;
    while (n >= div) {
        int temp = n % div;
        if (lp[temp] != temp)
            return false;
        div *= 10;
    }
    return true;
}

int hasZero(int n) {
    while (n) {
        if (n % 10 == 0)
            return true;
        n /= 10;
    }
    return false;
}

vector<int> dp(N + 1, 0);

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    seive();

    for (int i = 0; i < N; i++) {
        if (isAllDigitPrime(i) and !hasZero(i)) {
            dp[i] = 1;
        }
        if (i != 0) {
            dp[i] += dp[i - 1];
        }
    }

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int temp;
        cin >> temp;
        cout << dp[temp] << endl;
    }
}