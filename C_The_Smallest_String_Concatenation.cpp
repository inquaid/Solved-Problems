#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> v(n);
    for (auto &i : v)
        cin >> i;
    sort(v.begin(), v.end(), greater<int>());
    for (auto i : v)
        cout << i;
}