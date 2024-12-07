#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        set<int> st;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            int temp;
            cin >> temp;
            v[i] = temp;
            st.insert(temp);
        }
        if (k > 1 or st.size() == 1 or is_sorted(v.begin(), v.end())) {
            cout << "YES\n";
        } else
            cout << "NO\n";
    }
}