#include <bits/stdc++.h>
using namespace std;
#define int long long
#define flash                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
void solve();
signed main()
{
    flash;

    int n;
    cin >> n;
    while (n--)
    {
        solve();
    }
}
void solve()
{
    int n, positive = INT_MIN, negetive = INT_MAX, result = 0, temp, carry;
    cin >> n;
    stack<int> st;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        if (st.empty())
        {
            st.push(temp);
        }
        else if (st.top() > 0 && temp < 0)
        {
            st.push(temp);
        }
        else if (st.top() < 0 && temp > 0)
        {
            st.push(temp);
        }
        else
        {
            carry = st.top();
            st.pop();
            carry = max(carry, temp);
            st.push(carry);
        }
    }
    while (!st.empty())
    {
        result += st.top();
        st.pop();
    }

    cout << result << endl;
}
