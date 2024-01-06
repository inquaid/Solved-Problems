#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    unsigned long long t;
    cin >> t;
    while (t--)
    {
        unsigned long long n, s;
        cin >> n >> s;
        cout << s / (n * n) << endl;
    }

    return 0;
}