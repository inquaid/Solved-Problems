#include <bits/stdc++.h>
using namespace std;
#define flash                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

void solve();

int main()
{
    flash;
    int T;
    cin >> T;
    for (int i = 1; i <= T; i++)
    {
        vector<int> s;
        int temp;
        for (int i = 0; i < 3; i++)
        {
            cin >> temp;
            s.push_back(temp);
        }
        sort(s.begin(), s.end());
        cout << "Case " << i << ": " << s[1] << endl;
    }

    return 0;
}
