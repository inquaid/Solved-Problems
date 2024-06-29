#include <bits/stdc++.h>
using namespace std;

#define int long long
const int mx = 1e6;
vector<int> primes, tray(mx);

void fill()
{
    primes.push_back(2);
    for (int i = 3; i <= mx; i += 2)
    {
        if (tray[i] == 0)
        {
            primes.push_back(i);
            for (int j = i * i; j <= mx; j += i)
            {
                tray[j] = 1;
            }
        }
    }
}

int count_factors(int n)
{
    int sz = primes.size(), cnt = 1;
    for (int i = 0; i < sz and primes[i] * primes[i] <= n; i++)
    {
        if (n % primes[i] == 0)
        {

            int expo = 1;
            while (n % primes[i] == 0)
            {

                n /= primes[i];
                expo++;
            }
            cout << primes[i] << " ";
            cnt *= expo;
        }
    }
    if (n > 1)
    {
        cnt *= 2;
    }
    return cnt;
}

signed main()
{
    fill();
    // for (int i = 0; i < 50; i++)
    // {
    //     cout << primes[i] << " ";
    // }
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << count_factors(n) << endl;
    }
}