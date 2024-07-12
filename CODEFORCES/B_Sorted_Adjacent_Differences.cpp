#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> v(n);
        for (auto &i : v)
            cin >> i;

        sort(v.begin(), v.end());
        while (v.size())
        {
            cout << v[v.size() / 2] << " ";
            v.erase(v.begin() + v.size() / 2);
        }

        cout << endl;
    }
}