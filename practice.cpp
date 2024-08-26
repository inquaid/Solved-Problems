#include <bits/stdc++.h>
using namespace std;
long long factorial(int n)
{
    long long result = 1;
    for (int i = 2; i <= n; ++i)
    {
        result *= i;
    }
    return result;
}

// Function to compute combinations
long long combinations(int n, int r)
{
    if (r > n)
        return 0;
    return factorial(n) / (factorial(r) * factorial(n - r));
}
int main()
{
    int cnt = 0, n = 4;
    for (int i = 0; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            cnt++;
        }
    }
    cout<<combinations(n,2)<<endl;
    cout << cnt;
}