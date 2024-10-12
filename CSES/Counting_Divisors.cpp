#include <bits/stdc++.h>
using namespace std;

const int N = 10000000;
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

int divisorCount(int n) {
    int res = 1;
    for (auto i : pr) {
        if (i * i > n)
            break;
        int cnt = 1;
        while (n % i == 0) {
            cnt++;
            n /= i;
        }
        res *= cnt;
    }
    if (n > 1) {
        res *= 2;
    }
    return res;
}

int main() {
    seive();
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int x;
        cin >> x;
        cout << divisorCount(x) << endl;
    }

    return 0;
}