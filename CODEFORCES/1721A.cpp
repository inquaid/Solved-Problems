#include <iostream>
#include <set>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s, ss;
        cin >> s >> ss;
        s += ss;
        set<char> st;
        for (int i = 0; i <= 3; i++)
        {
            st.emplace(s[i]);
        }
        cout << st.size() - 1 << endl;
    }
}