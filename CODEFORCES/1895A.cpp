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
        int t, k, c;
        cin >> t >> k >> c;
        if (t >= k)
        {
            cout << t << endl;
        }
        else if (t < k && (c + t) >= k)
        {
            cout << k << endl;
        }
        else
        {
            cout << k + (k - (t + c)) << endl;
        }
    }
}