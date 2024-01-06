#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string v;
        cin >> v;
        if (v.find('0') != string ::npos)
        {
            cout << "YES\n";
        }
        else
            cout << "NO\n";
    }
}