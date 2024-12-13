#include <bits/stdc++.h>
using namespace std;
#define sp " "
#define newline cout << "\n"
#define ll long long
#define int long long

int n, k;
vector<pair<double, double>> vpr;

bool isPossible(double mid) {
    // Conditions
    std::vector<double> sum;
    for (int i = 0; i < n; ++i) {
        sum.push_back( vpr[i].first - (mid * vpr[i].second));
    } sort(sum.begin(), sum.end(), greater<double>());

    double tempSum = 0;
    for (int i = 0; i < k; ++i) {
        tempSum += sum[i];
    }

    return tempSum >= 0;
}

void binarySearchOnAnswers() {
    cout << fixed << setprecision(16);
    double l = -1e9, r = 1e9;
    // while (isPossible(r) == false) {
    //     r *= 2;
    // }
    while ((r - l) >= 1e-9) {
        double mid = l + (r - l) / 2.0;
        if (isPossible(mid)) { 
            l = mid; 
        } else
            r = mid ;
    }
    cout << l;
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
    cin >> n >> k;
    for (int i = 0; i < n; ++i) {
        double a, b;
        cin >> a >> b;
        vpr.push_back({a, b});
    }
    binarySearchOnAnswers();
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();

    return 0;
}