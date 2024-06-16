#include <bits/stdc++.h>
using namespace std;
#define int long long
vector<int> primes;
vector<int> simple_sieve(int limit)
{
    vector<int> prime;
    vector<bool> is_prime(limit + 1, true);

    for (int p = 2; p * p <= limit; p++)
    {
        if (is_prime[p])
        {
            for (int i = p * p; i <= limit; i += p)
            {
                is_prime[i] = false;
            }
        }
    }

    for (int p = 2; p <= limit; p++)
    {
        if (is_prime[p])
        {
            prime.push_back(p);
        }
    }

    return prime;
}

void segmented_sieve(int n)
{
    int limit = sqrt(n) + 1;
    vector<int> prime = simple_sieve(limit);

    int low = limit;
    int high = 2 * limit;

    while (low < n)
    {
        if (high >= n)
        {
            high = n;
        }

        vector<bool> mark(high - low + 1, true);

        for (int i = 0; i < prime.size(); i++)
        {
            int loLim = max(prime[i] * prime[i], (low + prime[i] - 1) / prime[i] * prime[i]);

            for (int j = loLim; j < high; j += prime[i])
            {
                mark[j - low] = false;
            }
        }

        for (int i = low; i < high; i++)
        {
            if (mark[i - low])
            {
                // cout << i << " ";
                primes.push_back(i);
            }
        }

        low = low + limit;
        high = high + limit;
    }
}

signed main()
{
    int n = 1e10;
    primes.push_back(2);
    FILE *fp = fopen("output.txt", "w");
    // cout << 2 << " "; // Since 2 is the first prime number
    segmented_sieve(n);
    vector<int> res;
    int sz = primes.size();
    for (int i = 0; i < sz; i++)
    {
        for (int j = i + 1; j < sz; j++)
        {
            for (int k = j + 1; k < sz; k++)
            {
                int temp = pow(primes[i], 2) + pow(primes[j], 2) + pow(primes[k], 2);
                // res.push_back();
                fprintf(fp, "%lld ", temp);
            }
        }
    }

    return 0;
}
