#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string str = "...";
    int q;
    cin >> q;

    while (q--)
    {
        int n, cnt = 0;
        string s;
        cin >> n >> s;
        if (s.find(str) != string::npos)
        {
            cout << 2 << endl;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (s[i] == '.')
                    cnt++;
            }

            cout << cnt << endl;
        }
    }
}