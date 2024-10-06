#include<bits/stdc++.h>
using namespace std;
#define int long long
// int ary[1111][1111];
signed main(){
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(n);    
    for(auto &i : a) cin >> i;
    
    // vector<int> prex(n+2, 0);
    // vector<tuple<int, int, int, int>> store;
    vector<vector<int>> v(m);
    for (int i = 0; i < m; i++)
    {
        int l, r, d;
        cin >> l >> r >> d;
        // ary[l][r] = d;
        v[i].push_back(l - 1);
        v[i].push_back(r - 1);
        v[i].push_back(d);

    }

    vector<int> diff(m+2, 0);
    for (int i = 0; i < k; i++)
    {
        int x, y;
        cin >> x >> y;
        diff[x - 1]++;
        diff[y]--;
    }
    for (int i = 1; i <= m; i++)
    {
        diff[i] += diff[i-1];
    }
    // for(auto i : diff) cout << i << " ";
    // return 0;

    vector<int> prex2(n + 2, 0);
    for (int i = 0; i < m; i++)
    {
        int l = v[i][0];
        int r = v[i][1];
        int value = v[i][2];

        prex2[l] += (diff[i] * value);
        prex2[r + 1] -= (diff[i] * value);
    }

    a[0] += prex2[0];
    for (int i = 1; i < n; i++)
    {
        prex2[i] += prex2[i-1];
        a[i] += prex2[i];   
    }

    for(auto i : a) cout << i << " ";
        
    
}