#include <bits/stdc++.h>
using namespace std;
#define sp " "
#define newline cout << "\n"
#define ll long long
#define int long long

bool isPossible(int mid, int k, vector<int> &a) {
    // Conditions
    int n = a.size();
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += min(a[i], mid);
    }
    return sum >= (mid * k);
}

void binarySearchOnAnswers(int k, vector<int> &a) {

    int l = 0, r = 1;
    while(isPossible(r, k, a) ){
        r *= 2;
    }
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (isPossible(mid, k, a)) { // lower bound
            l = mid + 1; // swap r, l for upper bound
        } else
            r = mid - 1;
    }
    cout << l - 1;
}

void tTestCase() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        std::vector<int> v(n);
        for (int i = 0; i < n; ++i) {
            cin >> v[i];    
        }
        newline;
    }
}

void solve() { 
    // tTestCase(); 
    int k, n;
    cin >> k >> n;
    int sum = 0;
    std::vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin>>v[i];
    }

    binarySearchOnAnswers(k, v);
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();

    return 0;
}