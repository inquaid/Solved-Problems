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
        string s;

        cin >> s;
        map<char, int> mp;
        int size = s.size();
        for (int i = 0; i < size; i++)
        {
            mp[s[i]]++;
        }
        int on = 0, tw = 0;
        for (auto i : mp)
        {
            if (i.second >= 2)
            {
                tw++;
            }
            else if (i.second == 1)
            {
                on++;
            }

            // cout << i.first << " " << i.second << endl;
        }
        if (on % 2 == 0)
        {
            on /= 2;
        }
        else
        {
            on--;
            on /= 2;
        }
        cout << tw + on << endl;
    }
}