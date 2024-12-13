#include <bits/stdc++.h>
using namespace std;
#define sp " "
#define newline cout << "\n"
#define ll long long
#define int long long

bool isPossible(int w, int h, int mid, int n) {
    // Conditions

    return n <= ( floor(mid/(w*1.0)) * floor(mid/(h*1.0)) );
}

void binarySearchOnAnswers(int w, int h, int n) {

    int l = 0, r = 1;
    while(isPossible(w,h,r,n) == false){
        r *= 2;
    }
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (isPossible(w, h, mid, n)) { // lower bound
            r = mid - 1;
        } else
            l = mid + 1; // swap r, l for upper bound
    }
    cout << r + 1;
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
    int w, h, n;
    cin >> w >> h >> n;
    binarySearchOnAnswers(w, h, n);
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();

    return 0;
}