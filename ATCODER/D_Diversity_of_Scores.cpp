#include <bits/stdc++.h>
using namespace std;
#define flash                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define int long long

signed main()
{
    flash;
    int n, t;
    cin >> n >> t;
    vector<int> scores(n, 0);
    map<int, int> freq;
    freq[0] = n;

    while (t--)
    {
        int a, b;
        cin >> a >> b;
        --a;

        if (--freq[scores[a]] == 0)
        {
            freq.erase(scores[a]);
        }

        scores[a] += b;
        ++freq[scores[a]];

        cout << freq.size() << '\n';
    }

    return 0;
}
