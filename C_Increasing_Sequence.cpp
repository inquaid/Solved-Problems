#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    int n, d;
    cin >> n >> d;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;
    int need = 0;
    for (int i = 0; i < n - 1; i++) {
       if (v[i] > v[i + 1]) {
            int gap = v[i] - v[i + 1];
            int Tempneed = ceil(gap / (d * 1.0));
            need += Tempneed;
            v[i + 1] += (d * Tempneed);
        }  if (v[i] == v[i + 1]) {
            need++;
            v[i + 1] += d;
            
        } 
    }
    // for(auto i : v)
    //     cout << i << " ";
    // if (v[n - 2] == v[n - 1])
    //     need++;
    // else if (v[n - 2] > v[n - 1]) {
    // }
    cout << need;
}