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
    string temp;
    map<string, int> mp;
    while (T--)
    {
        cin >> temp;
        if (mp[temp] != 0)
        {
            // mp[temp]++;
            cout << temp << mp[temp] << endl;
        }
        else
        {
            cout << "OK\n";
        }
        mp[temp]++;
    }

    return 0;
}
