#include <bits/stdc++.h>
using namespace std;
#define int unsigned int
#define found_it_after_2_hours (int)((1 << 31) - 1)
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n), tray;
        for (auto &i : v)
        {
            cin >> i;
            tray.push_back(i ^ found_it_after_2_hours);
        }
        sort(v.begin(), v.end());
        sort(tray.begin(), tray.end());

        int i = 0, j = 0, cnt = 0, temp = n;
        // for(auto i: tray) cout << i << ' ';
        while (i < n && j < n)
        {

            // if(i==(n-1)){}
            if (v[i] == tray[j])
            {
                cnt++;
                temp--;
                i++;
                j++;
            }
            else if (v[i] < tray[j])
            {
                i++;
            }
            else
            {
                j++;
            }
        }

        cout << temp + (cnt / 2);
        cout << '\n';
    }
}