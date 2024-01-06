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
        int n, cnt = 0;
        string s;
        cin >> n >> s;
        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] == ')')
                cnt++;
            else
                break;
        }

        // cout<<cnt<<endl;
        ((n - cnt) >= cnt) ? cout << "NO" : cout << "YES";
        cout << endl;
    }
}