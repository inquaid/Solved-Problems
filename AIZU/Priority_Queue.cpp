#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
int main()
{
    string s;
    int n;
    priority_queue<int> pq;
    while (true)
    {
        cin >> s;
        // cin.ignore();
        if (s == "end")
            return 0;
        if (s == "insert")
        {
            cin >> n;
            pq.push(n);
        }
        else
        {
            if (pq.empty() == false)
            {
                cout << pq.top() << endl;
                pq.pop();
            }
        }
    }

    return 0;
}