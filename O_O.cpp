#include <bits/stdc++.h>
using namespace std;
#define sp " "
#define newline cout << "\n"
#define ll long long
#define int long long

int n, k;   
std::vector<int> v;

bool isPossible(int probableSum) {
    // Conditions
    int tempSum = 0, tempK = 0;
    for (int i = 0; i < n; ++i) {
        if(v[i] > probableSum) return false;
        tempSum += v[i];
        if(tempSum > probableSum){
            tempK++;
            tempSum = v[i];
        }
    }
    return tempK == k;
}

void binarySearchOnAnswers() {
    int l = 0, r = 1;
    while (isPossible(r) == false) {
        r *= 2;
    }
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (isPossible(mid)) { // lower bound
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
    vector<int> v;
    

    return 0;
}