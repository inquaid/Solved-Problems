#include <bits/stdc++.h>
using namespace std;

int is_even(int n)
{
    return (n & 1) == false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n), res;
        int odd = 0, even = 0, cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (is_even(a[i]))
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        sort(a.begin(), a.end());

        for (int i = 0; i < n - 1; i++)
        {

            if (abs(a[i + 1] - a[i]) == 1)
            {
                cnt += 2;
                i++;
            }
        }

        if (is_even(odd) && is_even(even))
        {
            cout << "YES\n";
        }
        else if (cnt > 0)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}