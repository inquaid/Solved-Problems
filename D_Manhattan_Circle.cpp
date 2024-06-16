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
        int n, m, temp = 0, x = 0, y = 0;
        cin >> n >> m;
        string s;
        for (int i = 0; i < n; i++)
        {
            cin >> s;
            int p = count(s.begin(), s.end(), '#');
            if (p > temp)
            {
                x = i;
                y = s.find('#') + ceil(p / 2);

                temp = p;
            }
        }
        // cout << ceil(temp / 2) << endl;
        cout << x + 1 << " " << y + 1 << '\n';
    }
}