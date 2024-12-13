#include <bits/stdc++.h>
using namespace std;
#define sp " "
#define newline cout << "\n"
#define ll long long
#define int long long

int n, d;
std::vector<int> v;

pair<int, int> res;

bool isPossible(double x) {

    vector<double> prefix(n + 1, 0);
    for (int i = 1; i <= n; ++i){
        prefix[i] = prefix[i-1] + (v[i-1] - x);
    }

    double minPrefix = 0;
    int start = 0;

    for (int r = d; r <= n; ++r) {
        if(prefix[r] - minPrefix >= 0){
            res=  {start+1, r};
            return true;
        }

        if(prefix[r-d+1] < minPrefix){
            minPrefix = prefix[r-d+1];
            start = r-d+1;
        }
    }
    return false;
}

void binarySearchOnAnswers() {

    double l = -1e9, r = 1e9;
    // while (isPossible(r) == false) {
    //     r *= 2;
    // }
    while ((r-l) > 1e-6) {
        double mid = (r + l) / 2.0;
        if (isPossible(mid)) { // lower bound
            l = mid ; // swap r, l for upper bound
        } else
            r = mid ;
    }
    cout << res.first << sp << res.second ;
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
    cin >> n >> d;
    v.resize(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    // for(auto i : v)cout << i << " ";
    binarySearchOnAnswers();
    // isPossible(1);
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();

    return 0;
}