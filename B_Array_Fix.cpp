#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
void solve();
int main()
{
    int t, n, temp;
    cin >> t;
    while (t--)
    {
        solve();
        cout << endl;
    }
}
void solve()
{
    int n, temp;
    cin >> n;
    vector<int> v, result, store(n);
    deque<int> dq;
    for (auto &i : store)
        cin >> i;

    for (int i = 0; i < n; i++)
    {
        // cin >> temp;
        if (is_sorted(v.begin(), v.end()))
        {
            cout << "YES";
            return;
        }
        
        temp = store[i];
        if (temp == 0)
        {
            v.push_back(0);
            continue;
        }
        while (temp)
        {
            // v.push_back(temp % 10);
            dq.push_front(temp % 10);
            temp /= 10;
        }
        while (dq.empty() == false)
        {
            v.push_back(dq.front());
            dq.pop_front();
        }
    }
    if (is_sorted(v.begin(), v.end()))
    {
        cout << "YES";
    }
    else
        cout << "NO";
    // for (auto i : v)
    //     cout << i << " ";
}