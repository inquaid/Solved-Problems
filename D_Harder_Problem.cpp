#include <bits/stdc++.h>
using namespace std;
#define sp " "
#define newline cout << "\n"
#define ll long long
#define int long long

void tTestCase() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v;
        map<int,int> mp;
        for (int i = 0; i < n; ++i) {
            int temp;
            cin >> temp;
            if(mp[temp] == 0)
                v.push_back(temp);
            mp[temp]++;
        }
        for(auto i : v) {cout << i << " ";}
        for (int i = 1; i <= n; ++i) {
            if(mp[i] == 0) cout << i << " ";
        }
        newline;
    }
}

void solve() { 
    tTestCase(); 

}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();

    return 0;
}