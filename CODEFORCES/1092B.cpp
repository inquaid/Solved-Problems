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
    int T, sum = 0;
    cin >> T;
    vector<int> v(T);
    for (int i = 0; i < T; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < T - 1; i += 2)
    {
        sum += (v[i + 1] - v[i]);
    }

    cout << sum << endl;
    return 0;
}
