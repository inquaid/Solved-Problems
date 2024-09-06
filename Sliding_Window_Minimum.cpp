#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;
    int res = v[0];
    for (int i = 1; i < k; i++)
    {
        res = min(res, v[i]);
    }
    cout<<res<<" ";
    for (int i = k; i < n; i++)
    {
        
    }
    
}