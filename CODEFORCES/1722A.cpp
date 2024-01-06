#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int q;
    cin >> q;

    //    cout<<str;

    while (q--)
    {
        int n;
        string s;
        cin >> n >> s;
        if (n != 5)
        {
            cout << "NO" << endl;
        }
        else
        {
            int t = 0, I = 0, m = 0, u = 0, r = 0;
            for (int i = 0; i < 5; i++)
            {
                if (s[i] == 'T')
                {
                    t++;
                }
                if (s[i] == 'i')
                {
                    I++;
                }
                if (s[i] == 'm')
                {
                    m++;
                }
                if (s[i] == 'u')
                {
                    u++;
                }
                if (s[i] == 'r')
                {
                    r++;
                }
            }
            if (t != 0 && I != 0 && m != 0 && u != 0 && r != 0)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
}