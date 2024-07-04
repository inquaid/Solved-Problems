#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin >> q;
    vector<int> v;
    while (q--)
    {
        int n, k;
        cin >> n;
        if (n == 2)
        {
            v.pop_back();
        }
        else
        {
            cin >> k;
            if (n == 0)
            {
                v.push_back(k);
            }
            else
            {
                cout << v[k] << endl;
            }
        }
    }
}