#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, i;
        cin >> n;
        for (i = n; i > 1; i -= 2)
            cout << i << " ";
        // cout<<endl;
        if (n & 1)
            cout << 1 << " ";
        i++;
        for (int j = i; j < n; j += 2)
            cout << j << " ";
        cout << endl;
    }
}
