#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (auto &i : v)
            cin >> i;
        sort(v.begin(), v.end());
        int i = 0;
        int sum = 0, temp = 0;
        for (i = 0; i < n; i++) {
            sum += (n - i) * (v[i] - temp);
            if (sum >= k) {
                sum -= (n - i) * (v[i] - temp);
                int j = i;
                while (sum < k) {
                    int add = min(v[j], k - sum);
                    sum += add;
                    j++;
                }
                break;
            }
            temp = v[i];
        }
        cout << sum + i << endl;
    }
}