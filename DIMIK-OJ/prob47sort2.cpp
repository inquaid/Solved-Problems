#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, b, temp, i;
    cin >> t;
    while (t--)
    {
        cin >> a;
        vector<int> v;
        for (int i = 0; i < a; i++)
        {
            cin >> temp;
            v.push_back(temp);
        }
        cin >> b;
        for (int i = 0; i < b; i++)
        {
            cin >> temp;
            v.push_back(temp);
        }
        sort(v.begin(), v.end());
        for (i = 0; i < a + b - 1; i++)
        {
            cout << v[i] << " ";
        }
        cout << v[i] << endl;
    }
}