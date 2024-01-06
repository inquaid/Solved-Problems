#include <bits/stdc++.h>
using namespace std;

#define flash                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

bool isprime(int a)
{
    for (int i = 2; i < a; i++)
    {
        if (a % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int check(int a)
{
    int cnt = 0, temp;
    for (int i = 2; i < a; i++)
    {
        if (a % i == 0 && isprime(i))
        {
            cnt++;
        }
    }
    return cnt;
}

int main()
{
    flash;

    int a, cnt = 0;
    cin >> a;
    for (int i = 1; i <= a; i++)
    {
        if (check(i) == 2)
        {
            cnt++;
        }
    }
    cout << cnt << endl;
}