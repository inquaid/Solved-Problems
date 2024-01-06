#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    vector<long long> v;
    for (long long i = 0; i < n; i++)
    {
        long long temp;
        cin >> temp;
        v.push_back(temp);
    }
    sort(v.begin(), v.end());

    long long k;
    cin >> k;

    while (k--)
    {
        long long check;
        cin >> check;
        auto it = upper_bound(v.begin(), v.end(), check);
        cout << distance(v.begin(), it) << endl;
    }
}