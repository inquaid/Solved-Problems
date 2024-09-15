#include <bits/stdc++.h>
using namespace std;

string t, p;
vector<int> a;

bool check(int i)
{
    vector<bool> removed(t.size(), false);

    for (int j = 0; j < i; j++)
    {
        removed[a[j]] = true;
    }

    int n = t.size(), k = 0, m = p.size();
    for (int j = 0; j < n; j++)
    {

        if (removed[j] == false and p[k] == t[j])
        {
            k++;
            if (k == m)
                return true;
        }
    }
    return k == m;
}

int main()
{
    cin >> t >> p;
    int n = t.size();
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        temp--;
        a.push_back(temp);
    }

    int l = 0, r = n;
    while (l < r)
    {
        int mid = l + (r - l) / 2;
        if (check(mid))
        {
            l = mid + 1;
        }
        else
        {
            r = mid;
        }
    }
    cout << l - 1;
}