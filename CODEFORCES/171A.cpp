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
    int a;
    string b;
    cin >> a >> b;
    reverse(b.begin(), b.end());
    int c = stoi(b);

    cout << a + c;

    return 0;
}
