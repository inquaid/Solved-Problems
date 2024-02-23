#include <bits/stdc++.h>
using namespace std;
#define flash                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

void solve();
bool isEven(int n)
{
    return !(n & 1);
}

int main()
{
    flash;
    int T;
    cin >> T;

    while (T--)

        solve();

    return 0;
}

void solve()
{
    int n, k;
    string input;
    cin >> n >> k >> input;
    map<char, int> mp;
    for (int i = 0; i < n; i++)
        mp[input[i]]++;

    map<char, int>::iterator it;
    int odd = 0;
    for (it = mp.begin(); it != mp.end(); it++)
    {
        if (!isEven((*it).second))
            odd++;
    }
    // cout << odd << endl;
    if (odd - k > 1)
        cout << "NO\n";

    else
        cout << "YES\n";
}