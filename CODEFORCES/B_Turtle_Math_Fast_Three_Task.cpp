#include <bits/stdc++.h>
using namespace std;

void solve();

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
void solve()
{
    int n, sum = 0, cnt = 0, temp;

    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
    }
    if (sum % 3 == 0)
    {
        cout << 0 << endl;
    }
    else
    {
        if ((sum + 1) % 3 == 0)
        {
            cout << 1 << endl;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                temp = sum - v[i];
                if (temp % 3 == 0)
                {
                    cout << 1 << endl;
                    return;
                }
            }
            cout << 2 << endl;
        }
    }
}