#include <bits/stdc++.h>
using namespace std;
#define flash                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

int main()
{
    // flash;
    while (true)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if (a == b && b == c && c == d && a == 0)
        {
            break;
        }
        int sum = 1080;
        int first = (40 + a - b) % 40;
        int second = (40 + c - b) % 40;
        int third = (40 + c - d) % 40;

        cout << sum + ((first + second + third) * 9) << endl;
    }
    return 0;
}
