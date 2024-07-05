#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;
    priority_queue<int> pq;
    cout << "-1\n-1\n";
    pq.push(v[0]);
    pq.push(v[1]);
    int res = 1;
    for (int i = 2; i < n; i++)
    {
        pq.push(v[i]);
        int temp1 = pq.top();
        pq.pop();
        int temp2 = pq.top();
        pq.pop();
        int temp3 = pq.top();
        pq.pop();

        cout << temp1 * temp2 * temp3 << endl;
        pq.push(temp1);
        pq.push(temp2);
        pq.push(temp3);
    }
}