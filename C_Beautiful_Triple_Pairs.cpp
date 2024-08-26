#include <bits/stdc++.h>
using namespace std;
#define tpl tuple<int, int, int>
#define vtp vector<tpl>
#define g1 get<0>
#define g2 get<1>
#define g3 get<2>

void solve();

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}



void solve()
{
    // mp.clear();
    int n;
    cin >> n;
    vector<int> v(n);

    for (auto &i : v)
        cin >> i;

    vtp tp;
    map<pair<int, int>, pair<set<int>, vector<int>>> mp;
    map<pair<int, int>, pair<set<int>, vector<int>>> mp2;
    map<pair<int, int>, pair<set<int>, vector<int>>> mp3;
    for (int i = 0; i < n - 2; i++)
    {
        mp[make_pair(v[i + 1], v[i + 2])].first.insert(v[i]);
        mp[make_pair(v[i + 1], v[i + 2])].second.push_back(v[i]);
        mp2[make_pair(v[i], v[i + 2])].first.insert(v[i + 1]);
        mp2[make_pair(v[i], v[i + 2])].second.push_back(v[i + 1]);
        mp3[make_pair(v[i], v[i + 1])].first.insert(v[i + 2]);
        mp3[make_pair(v[i], v[i + 1])].second.push_back(v[i + 2]);
    }
    int m = n - 2, cnt = 0;
    for (auto i : mp)
    {
        cnt += i.second.second.size() * ((int)i.second.first.size() - 1);
    }

    for (auto i : mp2)
    {
        cnt += i.second.second.size() * ((int)i.second.first.size() - 1);
    }
    for (auto i : mp3)
    {
        cnt += i.second.second.size() * ((int)i.second.first.size() - 1);
    }
    cout << cnt << endl;
}
