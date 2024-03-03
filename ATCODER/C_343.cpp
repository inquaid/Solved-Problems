#include <bits/stdc++.h>
using namespace std;
#define flash                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define int long long

void solve();

bool isPalindrome(int a)
{
    string s = to_string(a);
    for (int i = 0, j = s.size() - 1; i < j; i++, j--)
    {
        if (s[i] != s[j])
            return false;
    }
    return true;
}

signed main()
{
    flash;
    int n, i = 1, result;
    cin >> n;
    while (i * i * i <= n)
    {
        if (isPalindrome(i * i * i))
        {
            result = i * i * i;
        }

        i++;
    }
    cout << result;
    return 0;
}
