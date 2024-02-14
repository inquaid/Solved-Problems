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
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (auto &i : v)
    {
        cin >> i;
    }
    if (k == 1)
    {
        cout << *min_element(v.begin(), v.end()) << endl;
    }

    else if (k == 2)
    {
        cout << max(v[0], v[n - 1]);
    }
    else
        cout << *max_element(v.begin(), v.end());

    return 0;
}
