#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a;
    cin >> a;
    vector<int> ary(a);
    map<int, long long> fq;
    for (int i = 0; i < a; i++)
    {
        cin >> ary[i];
        fq[ary[i]]++;
    }
    sort(ary.begin(), ary.end());
    int maxx = ary[a - 1] - ary[0];
    long long cnt = 0;
    if (maxx == 0)
    {
        cnt = (long long)a * (a - 1) / 2;
    }
    else
    {
        cnt = fq[ary[0]] * fq[ary[a - 1]];
    }
    cout << maxx << " " << cnt;
}
