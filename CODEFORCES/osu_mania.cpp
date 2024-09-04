#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            string temp;
            cin >> temp;
            auto it = find(temp.begin(), temp.end(), '#');
            // cout << distance(temp.begin(), it) << " ";
            v.push_back(distance(temp.begin(), it));
        }
        int size = v.size();
        for (int i = size - 1; i >= 0; i--)
        {
            cout << v[i] + 1 << " ";
        }

        cout << endl;
    }
}