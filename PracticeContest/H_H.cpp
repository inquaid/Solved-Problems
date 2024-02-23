#include <bits/stdc++.h>
using namespace std;
#define flash                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

void solve();

int main()
{
    flash;
    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }

    return 0;
}

void solve()
{
    int n, temp;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        v.push_back(temp);
    }
    int mx = n, mn = 1, strt = 0, ed = n - 1;

    while (strt < ed)
    {

        if ((v[strt] == mx) || (v[strt] == mn) || (v[ed] == mx) || (v[ed] == mn))

        {
            if (v[strt] == mx)

            {
                strt++;
                mx--;
            }
            else if (v[strt] == mn)
            {
                strt++;
                mn++;
            }

            if (v[ed] == mx)
            {
                ed--;
                mx--;
            }
            else if (v[ed] == mn)
            {
                ed--;
                mn++;
            }
        }
        else
        {
            cout << strt + 1 << " " << ed + 1 << endl;
            return;
        }
    }

    cout << -1 << endl;
}