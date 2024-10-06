#include <bits/stdc++.h>
using namespace std;
// #define int long long
const int N = 1e7 + 7;
vector<int> isPrime(N + 1, 0);
vector<int> primes;
void func()
{
    for (int i = 2; i <= N; ++i)
    {
        if (isPrime[i] == 0)
        {
            isPrime[i] = i;
            primes.push_back(i);
        }
        for (int j = 0; i * primes[j] <= N; ++j)
        {
            isPrime[i * primes[j]] = primes[j];
            if (primes[j] == isPrime[i])
            {
                break;
            }
        }
    }
}

int main()
{
    func();
    int n;
    cin >> n;
    // int sz = primes.size();
    for (int i = 1; i <= n; i++)
    {
        int temp, cnt = 0;
        cin >> temp;
        for (int j = 0; primes[j] <= (temp/2); j++)
        {
            int b = temp - primes[j];
            if (isPrime[b] == b)
            {
                cnt++;
            }
        }
        cout << "Case " << i << ": " << cnt << endl;
    }
}