#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        int sz = s.size(), res = INT_MAX;
        int pos[3] = {-1, -1, -1};
        for (int i = 0; i < sz; i++)
        {
            if (s[i] == '1' || s[i] == '2' || s[i] == '3')
            {
                pos[s[i] - '1'] = i;
                if (pos[0] != -1 && pos[1] != -1 && pos[2] != -1)
                {
                    int len = i - min({pos[0], pos[1], pos[2]}) + 1;
                    res = min(res, len);
                }
            }
        }

        if (res == INT_MAX)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << res << endl;
        }
    }
    return 0;
}
