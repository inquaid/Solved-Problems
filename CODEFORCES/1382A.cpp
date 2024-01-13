#include <bits/stdc++.h>
using namespace std;
#define flash                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
void solve();
int main()
{
    flash;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long T;
    cin >> T;
    while (T--)
    {
        solve();
    }
}

void solve()
{

    int a, b, temp;
    cin >> a >> b;
    vector<int> ary, arr;
    for (int i = 0; i < a; i++)
    {
        cin >> temp;
        ary.push_back(temp);
    }

    for (int i = 0; i < b; i++)
    {
        cin >> temp;
        arr.push_back(temp);
    }
    sort(ary.begin(), ary.end());
    sort(arr.begin(), arr.end());
    int i = 0, j = 0;

    while (i < a && j < b)
    {
        if (ary[i] == arr[j])
        {
            cout << "YES\n"
                 << 1 << " " << ary[i] << endl;
            return;
        }
        else if (ary[i] > arr[j])
        {
            j++;
        }
        else
        {
            i++;
        }
    }
    cout << "NO\n";
}