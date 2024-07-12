#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int p1;
    cin >> p1;
    deque<int> dq1(p1);
    for (auto &i : dq1)
        cin >> i;
    int p2;
    cin >> p2;
    deque<int> dq2(p2);
    for (auto &i : dq2)
        cin >> i;
    int turns = 0;
    int z = 180;
    for (int i = 0; i < z; i++)
    {
        if (dq1.empty() == true || dq2.empty() == true)
            break;
        int a = dq1.front();
        int b = dq2.front();
        dq1.pop_front();
        dq2.pop_front();
        if (a > b)
        {
            dq1.push_back(b);
            dq1.push_back(a);
        }
        else
        {
            dq2.push_back(a);
            dq2.push_back(b);
        }

        turns++;
    }
    if (dq1.empty())
    {
        cout << turns << " " << 2;
    }
    else if (dq2.empty())
    {
        cout << turns << " " << 1;
    }
    else
        cout << -1;
}