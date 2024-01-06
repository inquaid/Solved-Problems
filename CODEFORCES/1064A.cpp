#include <bits/stdc++.h>
using namespace std;

#define out(x) cout << x << "\n"
#define flash                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define FOR(a, b, i) for (int i = (a); i < (b); i++)
#define ROF(b, a, i) for (int i = (b); i > (a); i--)

bool even(int n)
{
    if (n % 2 == 0)
    {
        return true;
    }
    return false;
}

void comp(int *a, int *b)
{
    if (*a < *b)
    {
        *a = *a ^ *b;
        *b = *a ^ *b;
        *a = *a ^ *b;
    }
}

int main()
{
    flash;
    int a, b, c;
    cin >> a >> b >> c;
    comp(&a, &b);
    comp(&a, &c);
    comp(&b, &c);
    if (a - c - b < 0)
    {
        cout << 0;
    }
    else
        cout << a - c - b + 1;
}