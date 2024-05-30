#include <bits/stdc++.h>
using namespace std;
int main()

{
    int t;
    cin >> t;
    while (t--)
    {
        int n, temp;
        cin >> n;
        set<int> st;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            st.insert(temp);
        }
        if (st.size() == n)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}