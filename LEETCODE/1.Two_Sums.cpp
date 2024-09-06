#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, target;
    cin >> n >> target;
    vector<int> v(n);
    for (auto &i : v)
    {
        cin >> i;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (v[i] + v[j] == target)
            {
                cout << i + 1 << " " << j + 1 << endl;
                return 0;
            }
        }
    }
}