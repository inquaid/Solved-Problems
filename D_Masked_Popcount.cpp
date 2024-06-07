#include <bits/stdc++.h>
using namespace std;
#define int uint64_t
const int MOD = 998244353;

signed main()
{
    int n, m;
    cin >> n >> m;

    int res = 0;

    for (int bit = 0; bit < 60; ++bit)
    {
        if (m & (1ULL << bit))
        {
            int cycle_length = 1ULL << (bit + 1);
            int complete_cycles = (n + 1) / cycle_length;
            int remaining = (n + 1) % cycle_length;

            int count_set_bits = complete_cycles * (cycle_length / 2);
            count_set_bits += max(0LL, (int64_t)(remaining - (cycle_length / 2)));

            res = (res + count_set_bits) % MOD;
        }
    }

    cout << res << endl;

    return 0;
}
