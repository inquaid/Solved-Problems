#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        int n, f, k;
        cin >> n >> f >> k;
        vector<int> cubes(n);

        for (int i = 0; i < n; i++)
        {
            cin >> cubes[i];
        }

        int fav = cubes[f - 1];
        sort(cubes.begin(), cubes.end(), greater<int>());

        bool in_first_k = false, in_after_k = false;

        for (int i = 0; i < k; i++)
        {
            if (cubes[i] == fav)
            {
                in_first_k = true;
                break;
            }
        }

        for (int i = k; i < n; i++)
        {
            if (cubes[i] == fav)
            {
                in_after_k = true;
                break;
            }
        }

        if (in_first_k)
        {
            if (in_after_k)
            {
                cout << "MAYBE" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
