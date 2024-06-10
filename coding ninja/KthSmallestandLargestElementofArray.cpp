#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        k--;
        vector<int> v(n);
        for (auto &i : v)
            cin >> i;
        sort(v.begin(), v.end());
        n--;
        cout << v[k] << " " << v[n - k] << endl;
    }
}