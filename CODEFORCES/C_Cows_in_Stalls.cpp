#include <bits/stdc++.h>
using namespace std;
#define sp " "
#define newline cout << "\n"
#define ll long long
#define int long long

int n, k;
std::vector<int> v;

bool isPossible(int mid) {
    // Conditions
    int cow = 1;
    int prevCow = v[0];
    int i = 1;
    
    for (int i = 0; i < n; ++i)
    {
        if((v[i] - prevCow) >= mid){
            cow++;
            prevCow = v[i];
            if(cow == k) return true;
        }
    }

    return false;
}

void binarySearchOnAnswers() {
    int l = 0, r = v[n-1] - v[0];
    while (l <= r) {
        int mid = l + ((r - l) >> 1);
        if (isPossible(mid)) { // lower bound
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
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    binarySearchOnAnswers();
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();

    return 0;
}