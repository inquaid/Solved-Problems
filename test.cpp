#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<pair<int, int>> st;
    // set<int>st;
    for (int i = 0; i < 20; i++)
    {
        int a, b;
        cin >> a >> b;
        st.insert({a, b});
        // st.insert(a);
        // st.insert(b);
    }
    cout << endl
         << endl;
    for (auto i : st)
        cout << i.first << " " << i.second << endl;
}