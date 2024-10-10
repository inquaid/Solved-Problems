#include <bits/stdc++.h>
using namespace std;

void baseN(int n, int base)
{
    string s = "";
    while (n > 0)
    {
        s = to_string(n % base) + s;
        n = floor(n / (base * 1.0));
    }
    cout << s << " ";
}

int main()
{
    int n, mult = 1;
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            baseN(i * j, n);
        }
        cout << endl;
    }
}