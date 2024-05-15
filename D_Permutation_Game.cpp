#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        long long n, k, posB, posS;
        cin >> n >> k >> posB >> posS;
        posB--;
        posS--;
        vector<long long> a(n), p(n);
        vector<long long> b, s;

        for (int i = 0; i < n; i++)
        {
            cin >> p[i];
            p[i]--;
        }
        for (auto &i : a)
            cin >> i;

        long long boddy = a[posB], sassy = a[posS], cboddy = 0, csassy = 0, sz = b.size();
        for (int i = 0; i < sz && i < k; i++)
        {
            boddy = max(cboddy + b[i] * (k - i), boddy);
            sassy = max(csassy + s[i] * (k - i), sassy);
            cboddy += b[i];
            csassy += s[i];
        }
        if (boddy == sassy)
            cout << "Draw" << endl;
        else if (boddy > sassy)
            cout << "Bodya" << endl;
        else
            cout << "Sasha" << endl;
    }
}
