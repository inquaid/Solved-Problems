#include <bits/stdc++.h>

using namespace std;

bool is_integer(double n)
{
    return abs(n - int(n)) < 1e-9;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, cnt = 0;

    cin >> n;

    vector <pair <int, int> > v(n);

    for (int i = 0; i < n; i++)
    {
        int x, y;

        cin >> x >> y;

        v[i] = {x, y};
    }

    map <pair <int, int>, int> mp;

    for (auto it : v) {
        mp[it]++;
    }

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            double mid_x = (v[i].first + v[j].first) / 2.0;
            double mid_y = (v[i].second + v[j].second) / 2.0;

            if (!is_integer(mid_x) || !is_integer(mid_y)) {
                // continue;
            }
            else if (mp[{mid_x, mid_y}] > 0) {
                cnt++;
            }
        }
    }

    cout << cnt;
}