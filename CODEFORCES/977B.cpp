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
    int n;
    string s, temp, out;
    cin >> n >> s;
    map<string, int> mp;
    for (int i = 0; i < n - 1; i++)
    {
        temp = "";
        temp = s[i];
        temp += s[i + 1];
        mp[temp]++;
    }
    map<string, int>::iterator it;
    int mx = 0;
    for (it = mp.begin(); it != mp.end(); it++)
    {
        if ((*it).second > mx)
        {
            mx = (*it).second;
            out = (*it).first;
        }
        // cout << (*it).first << " " << (*it).second << endl;
    }
    cout << out;

    return 0;
}
