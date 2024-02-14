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
    int length, cnt = 0;
    string input;
    cin >> length >> input;

    for (int i = 0; i < length - 2; i++)
    {
        if (input[i] == 'x' && input[i + 1] == 'x' && input[i + 2] == 'x')
            cnt++;
    }
    cout << cnt;

    return 0;
}
