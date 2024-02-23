#include <bits/stdc++.h>
using namespace std;
#define flash                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

int isPrime[1000099];
void solve();
void seiveP(int a)
{

    memset(isPrime, -1, sizeof(isPrime));
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i <= a; i++)
    {
        if (isPrime[i] == -1)
        {
            for (int k = i; k <= a; k += i)
            {
                if (isPrime[k] == -1)
                    isPrime[k] = i;
            }
        }
    }
}

int main()
{
    flash;
    seiveP(1000099);
    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}

void solve()
{
    int a, b;
    cin >> a >> b;
    if (a == 1)
    {
        cout << "YES\n";
    }
    else if (isPrime[a] <= b)
    {
        cout << "NO\n";
    }
    else
        cout << "YES\n";
}