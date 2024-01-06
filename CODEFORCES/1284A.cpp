#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    vector<string> s(n), ss(m);
    //    string s[n],ss[m];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> ss[i];
    }

    int t;
    cin >> t;

    while (t--)
    {
        int temp;
        cin >> temp;
        int nn = (temp - 1) % n;
        int mm = (temp - 1) % m;

        cout << s[nn] << ss[mm] << endl;
    }
}