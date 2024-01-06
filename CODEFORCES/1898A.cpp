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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int a = count(s.begin(), s.end(), 'A');
        int b = count(s.begin(), s.end(), 'B');
        if (b == k)
        {
            cout << 0 << endl;
        }
        else if (k == 0)
        {
            cout << 1 << endl;

            int i;
            for (i = n - 1; i >= 0; i--)
            {
                if (s[i] == 'B')
                {
                    ++i;
                    break;
                }
            }
            cout << abs(i) << " " << 'A' << endl;
        }
        else if (b > k)
        {
            cout << 1 << endl;

            int cnt = 0, i;
            for (i = n - 1; i >= 0; i--)
            {
                if (s[i] == 'B')
                {
                    cnt++;
                }
                if (cnt == k)
                {
                    break;
                }
            }
            cout << abs(i) << " " << 'A' << endl;
        }

        else
        {
            cout << 1 << endl;

            int cnt = 0, i;
            for (i = 0; i < n; i++)
            {
                if (s[i] == 'A')
                {
                    cnt++;
                }
                if (cnt == (k - b))
                {
                    ++i;
                    break;
                }
            }
            cout << abs(i) << " " << 'B' << endl;
        }
    }

    return 0;
}