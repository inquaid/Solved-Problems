#include <iostream>
#include <queue>
#include <set>
using namespace std;

int main()
{
    priority_queue<long long, vector<long long>, greater<long long>> pq;
    set<long long> s;

    pq.push(1);
    s.insert(1);

    for (int i = 1; i < 1500; i++)
    {
        long long temp = pq.top();
        pq.pop();
        long long a = temp * 2, b = temp * 3, c = temp * 5;
        if (s.find(a) == s.end())
        {
            pq.push(a);
            s.insert(a);
        }
        if (s.find(b) == s.end())
        {
            pq.push(b);
            s.insert(b);
        }
        if (s.find(c) == s.end())
        {
            pq.push(c);
            s.insert(c);
        }
    }

    cout << "The 1500'th ugly number is " << pq.top() << ".\n";
    return 0;
}
