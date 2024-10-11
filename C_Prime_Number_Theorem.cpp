#include <bits/stdc++.h>
using namespace std;

const int N = 10000000 + 100;
vector<int> lp(N + 1);
vector<int> pr;
// vector<pair<int, int>> prime/s;
// map<int, int> primes;
vector<int> primes(N + 1, 0);
void seive()
{
    int cnt = 1;
    for (int i = 2; i <= N; ++i)
    {
        if (lp[i] == 0)
        {
            lp[i] = i;
            pr.push_back(i);
            primes[i] = cnt;
            cnt++;
        }
        for (int j = 0; i * pr[j] <= N; ++j)
        {
            lp[i * pr[j]] = pr[j];
            if (pr[j] == lp[i])
            {
                break;
            }
        }
    }
}

int main()
{
    seive();
    int t;
    cin >> t;
    while (t != 0)
    {
        int n = primes[t];
        cout << n << endl;
        // cout <<( abs(n - t/log(t)) / n ) * 100 << endl;
        cin >> t;
    }
}