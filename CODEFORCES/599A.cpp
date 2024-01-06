#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int s1, s2, ss;
    cin >> s1 >> s2 >> ss;
    int path1 = 2 * s1 + 2 * s2;
    int path2 = s1 + ss + s2;
    int path3 = min(s1, s2) + 2 * ss + min(s1, s2);
    cout << min({path1, path2, path3});
}