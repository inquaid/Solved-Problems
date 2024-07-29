#include <bits/stdc++.h>
using namespace std;
vector<int> v;

int res;

int check()
{
    return v[0] = 4;
}

int solve(int i, int n)
{
    if (i == (n - 1))
    {
        return 0;
    }
    return min(abs(v[i] - solve(i + 1, n)), abs(solve(i + 2, n) - v[i])) + solve(i + 1, n);
}

int main()
{
    int n;
    cin >> n;
    v[0] = 121;
    cout << check();
    return 0;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    cout << solve(0, n);
}