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

    int n, m;
    cin >> n >> m;
    string store[n];
    vector<int> v(m);

    for (int i = 0; i < n; i++)
    {
        cin >> store[i];
    }
    for (auto &i : v)
    {
        cin >> i;
    }
    map<char, int> mp;
    map<char, int>::iterator it;
    int mx = 0, sum = 0;
    for (int i = 0; i < m; i++)
    {
        mp.clear();
        mx = 0;
        for (int k = 0; k < n; k++)
        {
            // cout << store[k][i] << " ";
            mp[store[k][i]]++;
        }
        for (it = mp.begin(); it != mp.end(); it++)
        {
            if ((*it).second > mx)
            {
                mx = (*it).second;
            }
        }
        sum += (mx * v[i]);
        // cout << endl;
    }
    cout << sum;

    return 0;
}
