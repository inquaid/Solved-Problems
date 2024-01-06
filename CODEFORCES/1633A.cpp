#include <bits/stdc++.h>

using namespace std;

int changee(int n)
{
    n = n - (n % 10);
    for (int i = 1;; i++)
    {
        int temp = n + i;
        if (temp % 7 == 0)
        {
            return temp;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        cout << (n % 7 == 0 && n > 10 && n < 1000 ? n : changee(n)) << endl;
        // cout<<changee(n)<<endl;
    }
}