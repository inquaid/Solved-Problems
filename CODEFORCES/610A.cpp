#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;

    (n % 2 == 0) ? (n % 4 == 0) ? cout << (n / 4) - 1 : cout << (n / 4) : cout << 0;
}