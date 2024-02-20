#include <bits/stdc++.h>
using namespace std;
#define flash                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

void solve();

int main()
{
    flash;
    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }

    return 0;
}

void solve()
{
    string input;
    cin >> input;
    int len = input.size();
    int a = count(input.begin(), input.end(), 'A');
    cout << (a > (len - a) ? 'A' : 'B');
    cout << endl;
}