#include <bits/stdc++.h>
using namespace std;

void solve(int n, int k);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--)
    {
        int n, k;
        cin >> n >> k;
        solve(n, k);
    }

    return 0;
}

void solve(int n, int k)
{

    string ans = "";
    int i = 0;
    while (i < n)
    {
        for (char i = 'a'; i <= 'z'; i++)
        {
            int temp = i - 'a';
            if (temp >= k)
            {
                break;
            }
            ans.push_back(i);
        }
        i++;
    }
    cout << ans << endl;
}
