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
        int a, cnt = 0;
        cin >> a;
        while (a % 11)
        {
            a -= 111;
            if (a < 0)
            {
                cnt++;
                break;
            }
        }

        cout << (cnt == 0 ? "YES\n" : "NO\n");
    }
}