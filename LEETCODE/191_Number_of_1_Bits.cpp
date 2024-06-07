#include <bits/stdc++.h>
using namespace std;

int hammin_weight(int n)
{
    int cnt = 0;
    for (int i = 31; i >= 0; i--)
    {
        if ((n >> i) & 1 != 0)
            cnt++;
    }
    return cnt;
}

int main()
{
    int n;
    cin >> n;
    cout << hammin_weight(n);
}