#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int q;
    cin >> q;
    string str;
    for (int i = 0; i < 18; i++)
    {
        str += "Yes";
    }
    //    cout<<str;

    while (q--)
    {
        string s;
        cin >> s;
        if (str.find(s) != string ::npos)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
}