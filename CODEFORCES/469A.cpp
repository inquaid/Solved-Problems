#include <iostream>
#include <algorithm>
#include <set>
using namespace std;
int main()
{
    int n, a, b, temp;
    cin >> n >> a;
    int cnt = a + 1;
    set<int> ss;
    for (int i = 0; i < cnt; i++)
    {
        cin >> temp;
        if (i == a)
        {
            cnt += temp;
        }

        else
        {
            ss.insert(temp);
        }
    }
    int k = ss.size();

    (k == n) ? cout << "I become the guy." : cout << "Oh, my keyboard!";
}