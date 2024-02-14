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
    int len, n, cnt = 0;
    string s;
    cin >> len >> n >> s;
    // n++;
    while (n--)
    {
        for (int i = 0; i < len - 1; i++)
        {

            if (s[i] == 'B' && s[i + 1] == 'G')
            {
                swap(s[i], s[i + 1]);
                i++;
            }
        }
    }
    cout << s << endl;

    return 0;
}