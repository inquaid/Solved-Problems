#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int b;
    cin >> b;
    int ary[b];
    for (int i = 0; i < b; i++)
    {
        cin >> ary[i];
    }
    sort(ary, ary + b);
    int g;
    cin >> g;
    int art[g];
    for (int i = 0; i < g; i++)
    {
        cin >> art[i];
    }
    sort(art, art + g);
    int cnt = 0, i = 0, j = 0;

    while (i < b && j < g)
    {
        if (abs(ary[i] - art[j]) <= 1)
        {
            cnt++;
            i++;
            j++;
        }
        else if (ary[i] < art[j])
        {
            i++;
        }
        else
            j++;
    }

    cout << cnt << endl;
}