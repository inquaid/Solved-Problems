#include <iostream>
#include <set>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, temp;
        cin >> a;
        set<int> ss;
        for (int i = 0; i < a; i++)
        {
            cin >> temp;
            ss.insert(temp);
        }

        int l = ss.size();
        int left = a - l;

        (left % 2 == 0) ? cout << l << endl : cout << l - 1 << endl;
    }
}