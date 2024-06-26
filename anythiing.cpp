#include <bits/stdc++.h>
using namespace std;

// int gcd(int a, int b)
// {
//     if (b == 0)
//         return a;
//     return gcd(b, a % b);
// }
long m = 1e9 + 7;
int binaryExponentiation(int a, int b)
{
    int res = 1;
    while (b > 0)
    {
        if (b & 1)
        {
            res = res * a % m;
        }
        a = a * a % m;
        b = b / 2;
    }
    return res % m;
}

int main()
{
    // cout << __gcd(4, 9);
    // cout<<binaryExponentiation(2, 5);
    // cout << gcd(10, 20);
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, prex_sum;
    prex_sum.push_back(v[0]);
    for (int i = 1; i < v.size(); i++)
    {
        prex_sum.push_back(prex_sum[i - 1] + v[i]);
    }
    for (auto i : prex_sum)
        cout << i << " ";
}