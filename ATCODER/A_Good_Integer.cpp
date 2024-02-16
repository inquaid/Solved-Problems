#include <bits/stdc++.h>
using namespace std;
#define flash                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s = to_string(n);

    int size = s.size();
    for (int i = 0; i < size - 2; i++)
    {
        if (s[i] == s[i + 1] && s[i + 1] == s[i + 2])
        {
            cout << "Yes";
            return 0;
        }
    }
    cout << "No";

    return 0;
}
