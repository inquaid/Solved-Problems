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
    string s;
    cin >> s;
    int cnt = count(s.begin(), s.end(), '4');
    cnt += count(s.begin(), s.end(), '7');

    // cout << cnt << endl;
    if (cnt == 4 || cnt == 7)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
