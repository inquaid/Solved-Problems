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
        int a, b;
        int xk, yk;
        int xq, yq;

        cin >> a >> b;
        cin >> xk >> yk;
        cin >> xq >> yq;

        vector<pair<int, int>> moves = {
            {a, b}, {a, -b}, {-a, b}, {-a, -b},
            {b, a}, {b, -a}, {-b, a}, {-b, -a}
        };

        set<pair<int, int>> st, st2;

        for(auto [dx, dy] : moves){
            st.insert({xk + dx, yk + dy});
            st2.insert({xq + dx, yq + dy});
        }

        int cnt = 0;
        for(auto i : st){
            if(st2.count(i)) cnt++;
        }   cout << cnt;

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