#include <iostream>
// #define int long long
using namespace std;

int check(int n, int cnt)
{
    if (n <= 1)
    {
        return cnt + 1;
    }

    else if (n % 2 != 0)
    {
        return check((3 * n) + 1, cnt + 1);
    }
    else
    {
        return check(n / 2, cnt + 1);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int i, j, cnt = 0;

    while (cin >> i >> j)
    {
        int from = min(i, j), to = max(i, j);
        int mx = 0;
        for (int k = from; k <= to; k++)
        {
            cnt = check(k, 0);
            if (cnt > mx)
            {
                mx = cnt;
            }
        }
        cout << i << " " << j << " " << mx << endl;
    }
    return 0;
}
