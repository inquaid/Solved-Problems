#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;
    if (is_sorted(a.begin(), a.end()))
        cout << "yes\n1 1" << endl;
    else
    {
        int l = 0, r = n - 1;
        while (l < (n + 1) && a[l] < a[l + 1])
            l++;
        while (r > 0 && a[r] > a[r - 1])
            r--;
        reverse(a.begin() + l, a.begin() + r + 1);
        if (is_sorted(a.begin(), a.end()))
            cout << "yes\n"
                 << l + 1 << " " << r + 1 << endl;
        else
            cout << "no" << endl;
    }
}