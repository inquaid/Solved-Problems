#include <bits/stdc++.h>
using namespace std;

void solve();

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--)
    {
        solve();
        cout << "\n";
    }
}

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
    {
        cin >> i;
    }

    long long totalSales = 0, maxTotalSales = 0;

    for (int i = 0; i < n; ++i)
    {
        totalSales += v[i];
    }
    maxTotalSales = totalSales;

    long long currentSales = 0;
    for (int i = 0; i < n; ++i)
    {
        currentSales += v[i];
        long long potentialTotalSales = currentSales + v[i];
        maxTotalSales = max(maxTotalSales, potentialTotalSales);
    }

    cout << maxTotalSales;
}
