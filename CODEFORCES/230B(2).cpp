#include <bits/stdc++.h>
using namespace std;
#define flash                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
void solve();
int main()
{
    flash;

    int n;
    cin >> n;
    while (n--)
    {
        solve();
    }
}
void solve()
{
    double temp, temp2;
    cin >> temp;
    if (temp < 4)
    {
        cout << "NO\n";
        return;
    }
    temp2 = floor(sqrt(temp));

    if (pow(temp2, 2) != temp)
    {
        cout << "NO\n";
        return;
    }
    for (int i = 2; i * i < temp2 || i < 50; i++)
    {
        if ((int)temp2 % i == 0 && temp2 != i)
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}