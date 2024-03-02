#include <bits/stdc++.h>
using namespace std;
#define flash                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

void solve();

int main()
{
    flash;
    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }
}

void solve()
{
    int n, sum, temp, cnt;
    cin >> n;
    int ans = n;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            for (int k = 0; k < 5; k++)
            {
                for (int l = 0; l < 5; l++)
                {
                    int sum = l * 1 + k * 3 + j * 6 + i * 10;
                    temp = n - sum;
                    cnt = i + j + k + l + (temp) / 15;
                    if (temp >= 0 && (temp) % 15 == 0)
                    {
                        ans = min(ans, cnt);
                    }
                }
            }
        }
    }

    cout << ans << endl; 
}
