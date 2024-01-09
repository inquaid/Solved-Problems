#include <bits/stdc++.h>
using namespace std;

#define flash                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

int main()
{
    flash;
    int T;
    cin >> T;
    for (int k = 1; k <= T; k++)
    {
        int n, r;

        cin >> n >> r;
        map<int, set<int>> mp;
        mp.clear();
        for (int j = 1; j <= r; j++)
        {
            int i, c;

            cin >> i >> c;
            mp[i].insert(c);
        }
        map<int, set<int>>::iterator sz;
        int cnt = 0;
        for (sz = mp.begin(); sz != mp.end(); sz++)
        {
            cnt += (*sz).second.size();
        }

        cout << "Scenario #" << k << (cnt == r ? ": possible\n" : ": impossible\n");
    }
}