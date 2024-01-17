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
    int n, tm;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> tm;
        if (i && v.back() > tm)
        {
            v.push_back(1);
        }
        v.push_back(tm);
    }
    vector<int>::iterator i;
    cout << v.size() << endl;
    for (i = v.begin(); i != v.end(); i++)
    {
        cout << *(i) << " ";
    }
    cout << endl;
}