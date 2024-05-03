#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
int myFunc(string a, string b)
{
    int i = 0, j = 0;
    int n = a.length(), m = b.length();

    while (i < n && j < m)
    {
        if (a[i] == b[j])
        {
            i++;
        }
        j++;
    }

    return i;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        string s, ss;
        cin >> a >> b >> s >> ss;
        cout << myFunc(s, ss) << endl;
    }

    return 0;
}
