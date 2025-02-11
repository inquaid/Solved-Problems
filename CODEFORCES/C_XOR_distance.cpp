#include <iostream>
using namespace std;
#define int long long

int check_kth_bit(int x, int k) {
  return (x >> k) & 1LL;
}

int set_kth_bit(int x, int k) {
  return x | (1LL << k);
}

bool notSame(int a, int b, int i) {
    return check_kth_bit(a, i) and !check_kth_bit(b, i);
}

bool pos(int r, int i, int res) {
    return set_kth_bit(res, i) <= r;
}

void tTestCase(int t) {
    int a, b, r;
    cin >> a >> b >> r;
    int res = 0;
    if(a < b) swap(a, b);
    int end = 62;
    while(end >= 0 and check_kth_bit(a, end) == check_kth_bit(b, end)) end--; 

    for (int i = end - 1; i >= 0; --i) {
        if(notSame(a, b, i) and pos(r, i, res)) {
            res = set_kth_bit(res, i);
        } 
    }
    cout << abs( (a^res) - (b^res) ) << endl; 
}

void solve() {
    int t;
    cin >> t;
    while (t--) {
        tTestCase(t);
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("input.txt", "r" , stdin);
    // freopen("output.txt", "w", stdout);
    // cout << fixed << setprecision(20);

    solve();

    return 0;
}