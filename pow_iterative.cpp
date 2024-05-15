#include <bits/stdc++.h>
using namespace std;
// const int M = 1e8 + 7;

int bin_exp(int a, int b, int M)
{
    int ans = 1;
    while (b)
    {
        if (b & 1)
            ans = (ans * 1LL * a) % M;
        a = (a * 1LL * a) % M;
        b >>= 1;
    }
    return ans;
}

int main()
{
    cout << bin_exp(5, 15, 100000) << endl;
}