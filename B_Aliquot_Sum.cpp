#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

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
        int res = 0;
        for (int i = 1; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                res += i;
                if (n / i != i)
                {
                    res += n / i;
                }
            }
        }
        res -= n;
        if (res > n)
            cout << "abundant" << endl;
        else if (res < n)
            cout << "deficient" << endl;
        else
            cout << "perfect" << endl;
    }
}