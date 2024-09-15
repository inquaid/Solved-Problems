#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    cin >> n >> k;
    vector<int> x(n);
    for (auto &i : x)
        cin >> i;

    multiset<int> window;
    // int mid = ((k & 1 ? floor(k / 2.0) : k / 2)) - 1;
    int mid = k / 2;

    for (int i = 0; i < n; i++)
    {
        window.insert(x[i]);
        if (i >= k)
        {
            window.erase(window.find(x[i - k]));
        }
        if (i >= k - 1)
        {
            auto it = window.begin();
            advance(it, mid);
            if ((k & 1) == 0)
            {
                cout << (*prev(it)) << " ";
            }
            else
                cout << (*it) << " ";
        }
    }
}