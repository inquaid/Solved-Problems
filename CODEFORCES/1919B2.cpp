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
    while (T--)
    {
        int a;
        char temp;
        cin >> a;
        map<char, int> mp;
        for (int i = 0; i < a; i++)
        {
            cin >> temp;
            mp[temp]++;
        }
        cout << abs(mp['+'] - mp['-']) << endl;
    }
}