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
    string s, result;
    cin >> s;
    int size = s.size();
    for (int i = size - 1; i >= 0; i--)
    {
        if (s[i] == '.')
            break;
        else
            result += s[i];
    }
    reverse(result.begin(), result.end());
    cout << result;

    return 0;
}
