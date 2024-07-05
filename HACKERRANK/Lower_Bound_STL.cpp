#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;
    int q;
    cin >> q;
    while (q--)
    {
        int y;
        cin >> y;
        int pos = lower_bound(v.begin(), v.end(), y) - v.begin();
        if (v[pos] == y)
        {
            cout << "Yes " << pos + 1 << endl;
        }
        else
        {
            cout << "No " << pos + 1 << endl;
        }
    }
}