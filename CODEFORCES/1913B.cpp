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
    string s;
    cin >> T;
    while (T--)
    {
        cin >> s;
        int n = s.size(), one = 0, zero = 0, i;
        one = count(s.begin(), s.end(), '1');
        zero = n - one;
        for (i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                if (zero <= 0)
                {
                    break;
                }
                zero--;
            }
            else
            {
                if (one <= 0)
                {
                    break;
                }
                one--;
            }
        }

        cout << n - i << "\n";
    }

    return 0;
}
