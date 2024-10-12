#include <bits/stdc++.h>
using namespace std;

const int N = 1500;
vector<int> lp(N + 100);
vector<int> pr, NoldbachPrime, Psum(N + 1);

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
    int n = pr.size();
    for (int i = 0; i < n - 1; i++) {
        int temp = pr[i] + pr[i + 1] + 1;
        if (temp > N)
            continue;
        if (lp[temp] == temp)
            NoldbachPrime.push_back(temp);
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    seive();
    int n, k;
    cin >> n >> k;
    int indx = lower_bound(NoldbachPrime.begin(), NoldbachPrime.end(), n) -
               NoldbachPrime.begin();

    if (NoldbachPrime[indx] != n)
        indx--;

    indx++;
    cout << (indx >= k ? "YES" : "NO");
}
