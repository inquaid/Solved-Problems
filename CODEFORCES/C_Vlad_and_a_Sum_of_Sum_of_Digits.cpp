#include <bits/stdc++.h>
using namespace std;
const int m = 2 * 1e5 + 5;
vector<int> prex(m);

int sum(int n);
void fun();

void fun()
{
    // v[0] = 0;
    prex[0] = 0;
    for (int i = 1; i < m; i++)
    {
        // v[i] = sum(i);
        prex[i] = sum(i) + prex[i - 1];
    }
}

int sum(int n)
{
    int ttl = 0;
    while (n)
    {
        ttl += n % 10;
        n /= 10;
    }
    return ttl;
}
int main()
{
    fun();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << prex[n] << endl;
    }
}