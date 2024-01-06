#include <bits/stdc++.h>
using namespace std;

// #define int int

#define flash                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define FOR(a, b, i) for (int i = (a); i < (b); i++)
#define ROF(b, a, i) for (int i = (b)-1; i >= (a); i--)

bool even(int n)
{
    if (n % 2 == 0)
    {
        return true;
    }
    return false;
}

int main()
{
    flash;
    int t;
    cin >> t;
    while (t--)
    {
        int a, cnt = 0;
        cin >> a;
        vector<int> ary(a);
        for (auto &i : ary)
        {
            cin >> i;
        }
        FOR(0, a, i)
        {
            if (ary[i] == 1)
            {
                break;
            }
            else
                cnt++;
        }

        ROF(a, 0, i)
        {
            if (ary[i] == 1)
            {
                break;
            }
            else
                cnt++;
        }

        int c = count(ary.begin(), ary.end(), 0);
        cout << c - cnt << endl;
    }
}