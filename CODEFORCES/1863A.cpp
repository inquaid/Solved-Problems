#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int s, o, n;
        string ss;
        cin >> s >> o >> n >> ss;
        int re = o;
        int cnt = count(ss.begin(), ss.end(), '+');
        for (int i = 0; i < n; i++)
        {
            if (re >= s)
            {
                break;
            }

            if (ss[i] == '+')
            {
                re++;
            }
            else
                re--;
        }

        if (re >= s)
        {
            cout << "YES";
        }
        else if (cnt + o >= s)
        {
            cout << "MAYBE";
        }
        else
        {
            cout << "NO";
        }

        cout << endl;
    }
}