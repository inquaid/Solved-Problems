#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    cin >> n;
    n %= 4;
    cout << ((n == 0 || n == 3) ? 0 : 1);
}