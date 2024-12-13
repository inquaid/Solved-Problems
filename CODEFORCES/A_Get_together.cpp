#include <bits/stdc++.h>
using namespace std;
#define sp " "
#define newline cout << "\n"
typedef long long ll;
#define int long long

int n;
std::vector<pair<int, int>> vpr;

bool isPossible(double t) {
    // Conditions
    double left = -1e18, right = 1e18;
    for (auto &[x, v] : vpr) {
        left = max(left, x - v * t);
        right = min(right, x + v * t);
        if (left > right) return false; // No overlap
    }
    return true; // overlap
}

void binarySearchOnAnswers() {
    cin >> n;
    vpr.clear();
    for (int i = 0; i < n; ++i){
        ll x, v;
        cin >> x >> v;
        vpr.push_back({x, v});
    }

    double l = 0, r = 1;
    while (isPossible(r) == false) {
        r *= 2;
    }
    while (abs(r-l) >= 1e-6) {
        double mid = (r + l) / 2.0;
        if (isPossible(mid)) { // lower bound
            r = mid ;
        } else
            l = mid ; // swap r, l for upper bound
    }
    cout << fixed << setprecision(6) << r ;
}

void tTestCase() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        for (int i = 0; i < n; ++i) {
            int temp;
            cin >> temp;
            cout << temp << sp;
        }
        newline;
    }
}

void solve() { 
    // tTestCase(); 
    binarySearchOnAnswers();
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();

    return 0;
}