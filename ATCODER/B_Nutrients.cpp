#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(m);
    int arr[n][m];
    for (int i = 0; i < m; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < m; k++)
        {
            cin >> arr[i][k];
        }
    }
    int p = 0;
    for (int i = 0; i < m; i++)
    {
        int sum = 0;
        for (int k = 0; k < n; k++)
        {
            // cout << arr[k][i] << " ";
            sum += arr[k][i];
        }
        if (sum < a[p++])
        {
            cout << "No";
            return 0;
        }
        // cout<<sum<<" ";
    }
    cout << "Yes";
}