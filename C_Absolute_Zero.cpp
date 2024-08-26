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
        cout << endl;
    }
}

void solve()
{
    int n;
    cin >> n;
    int i = 30, res = 0;
    vector<int> a;
    bool even = false, odd = false;
    // for (auto &i : a)
    //     cin >> i;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        if (temp & 1)
        {
            odd = true;
        }
        else
            even = true;
        res += temp;
    }
    if (odd and even)
    {
        cout << -1;
        return;
    }

    for (int i = 30; i >= 0; i--)
    {
        if (res == 0)
            break;
        res = abs(res - (1 << i));
        a.push_back(1 << i);
        
    }
    if (res != 0)
    {
        cout << -1;
        return;
    }
    cout << a.size() << endl;
    for (auto i : a)
        cout << i << " ";
}