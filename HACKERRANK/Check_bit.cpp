#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, k;
    cin >> x >> k;
    if ((x >> k) & 1 == 1)
    {
        cout << "true";
    }
    else
        cout << "false";
}