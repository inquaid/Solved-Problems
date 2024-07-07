#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
unordered_map<int, int> mp;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> v;
    // unordered_set<int> ust;
    int temp;
    while (scanf("%d", &temp) == 1)
    {
        // ust.insert(temp);
        if (mp[temp] == 0)
            v.push_back(temp);
        mp[temp]++;
    }
    for (auto i : v)
        cout << i << " " << mp[i] << endl;
}