#include <bits/stdc++.h>
using namespace std;

#define flash                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

int main()
{
    flash;
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        string s;
        cin >> n >> s;
        int final = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '+')
            {
                final++;
            }
            else
                final--;
        }
        cout << abs(final) << endl;
    }
}