#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> x(n - 1);
        for (auto &i : x)
        {
            cin >> i;
        }

        vector<int> a(n);
        a[0] = 1e7;
        cout << a[0] << " ";

        for (int i = 1; i < n; i++)
        {
            a[i] = a[i - 1] + x[i - 1];
            cout << a[i] << " ";
        }

        cout << endl;
    }
    return 0;
}
