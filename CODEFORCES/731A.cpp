#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    int cnt = min(abs('a' - s[0]), abs('a' - s[0] + 26));
    // cout<<cnt<<endl;
    for (int i = 0; i < s.size() - 1; i++)
    {

        cnt += min(abs(s[i] - s[i + 1]), 26 - abs(s[i] - s[i + 1]));
    }
    cout << cnt << endl;
}