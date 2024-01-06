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
        int a, i = 0, sum = 0;
        cin >> a;
        string s;
        cin >> s;
        map<char, int> m;
        int solved = 0;

        for (int i = 0; i < s.size(); i++)
        {
            m[s[i]]++;
            if (m[s[i]] == s[i] - 'A' + 1)
            {
                solved++;
            }
        }

        cout << solved << endl;
    }
}
