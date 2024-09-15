#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;

    if (n == 1)
    {
        cout << "1 0\n";
        return 0;
    }
    int alice = 0, bob = 0;
    int i = 0, j = n - 1;
    while (i <= j)
    {

        // cout << v[i] << " " << v[j] << endl;
        if (alice <= bob)
        {
            alice += v[i];
            // bob += v[j];
            i++;
            // j--;
        }
        else
        {
            bob += v[j];
            j--;
        }
    }
    cout << i << " " << (n - i);
}