#include <bits/stdc++.h>
using namespace std;

#define flash                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

int main()
{
    flash;

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        set<int> s;
        int temp;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            s.insert(temp);
        }
        cout << s.size() << endl;
    }
}