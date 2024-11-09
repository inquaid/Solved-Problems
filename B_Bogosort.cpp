#include <bits/stdc++.h>
using namespace std;

const int N = 100000;
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

int main() {
    seive();
    for (int i = 0; i < 1000; i++) {
        if (lp[i] == i)
            cout << i << " ";
    }
}