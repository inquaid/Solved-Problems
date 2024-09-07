#include <bits/stdc++.h>
using namespace std;

int n, d, cnt = 0;

int main()
{
    cin >> n >> d;

    vector<int> a(n);
    for (auto &i : a)
        cin >> i;

    for (int i = 1; i < n; i++) {
        if (a[i] <= a[i - 1]) {
            int diff = a[i - 1] - a[i];
            int moves = (diff + d) / d;  
            a[i] += moves * d; 
            cnt += moves; 
        }
    }
    
    cout << cnt << endl;
}
