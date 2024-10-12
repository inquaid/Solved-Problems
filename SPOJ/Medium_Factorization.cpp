#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e7 + 50;
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

void check(int n) {
    printf("1");
    if (lp[n] == n) {
        printf(" x %lld\n", n);
        return;
    }

    int id = 0;
    int psize = pr.size();
    while (id < psize and pr[id] * pr[id] <= n) {
        while (n % pr[id] == 0) {
            n /= pr[id];
            printf(" x %lld", pr[id]);
        }

        id++;
    }
    if (n > 1) {
        printf(" x %lld", n);
    }
    printf("\n");
    // cout << "\n";
}

signed main() {

    seive();
    int n;

    while (scanf("%lld", &n) != EOF) {
        check(n);
    }

    return 0;
}