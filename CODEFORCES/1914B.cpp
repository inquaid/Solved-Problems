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
        int n, k;
        cin >> n >> k;
        vector<int> ary(n);
        for (int i = 0; i < n; i++)
        {
            ary[i] = i + 1;
        }
        reverse(ary.begin() + k, ary.end());
        for (int i = 0; i < n; i++)
        {
            cout << ary[i] << " ";
        }
        cout << endl;
    }
}
