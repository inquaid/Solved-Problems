#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--){
        int n, q;
        cin >> n >> q;

        vector<int> points(n);
        for (auto &i : points)
            cin >> i;

        int total = n - 1;
        map<int, int> count;
        int cnt_1 = 1, cnt = 0, index = 0;

        for (int i = 0; i < n; i++){
            int strt = points[i];
            int end = (i == (n - 1)) ? points[i] : points[i + 1] - 1;

            count[((n - cnt_1) * cnt_1) + cnt]++;
            cnt_1++;
            cnt++;

            if (i < n - 1){
                int range = end - strt;
                count[(n - (cnt_1 - 1)) * (cnt_1 - 1)] += range;
            }

        }

        while (q--){
            int k;
            cin >> k;
            cout << count[k] << " ";
        }
        cout << endl;
    }

    return 0;
}