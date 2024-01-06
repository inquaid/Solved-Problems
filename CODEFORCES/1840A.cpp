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
        int a;
        string s;
        char find;
        cin >> a >> s;
        for (int i = 0; i < a; i++)
        {
            find = s[i];
            cout << find;
            for (int j = i + 1; j < a; j++)
            {
                if (s[j] == find)
                {
                    i = j;
                    break;
                }
            }
        }
        cout << endl;
    }
}