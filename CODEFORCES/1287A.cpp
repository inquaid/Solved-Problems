#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int q;
    cin >> q;
    while (q--)

    {
        int n;
        string s;
        cin >> n >> s;
        int cnt = 0, result = 0, strt = false;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'A')
            {
                strt = true;

                result = max(cnt, result);
                cnt = 0;
            }
            if (strt && s[i] == 'P')
            {
                cnt++;
            }
        }
        result = max(result, cnt);
        cout << result << endl;
    }
}