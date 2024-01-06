#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        long long u, v;
        cin >> u >> v;

        cout << -(u * u) << " " << v * v << endl;
    }
}