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
    int T, m, store = 0;
    cin >> T >> m;
    vector<int> v(T);
    vector<int>::iterator it;

    for (it = v.begin(); it != v.end(); it++)
    {
        cin >> *it;
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < m; i++)
    {
        if (v[i] > 0)
            break;
        store += abs(v[i]);
    }
    cout << store << endl;

    return 0;
}
