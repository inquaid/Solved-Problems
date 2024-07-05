#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;
    map<int, int> mp;
    stack<int> st;
    int n = s.size(), cnt = 0;

    for (int i = 0; i < n; i++)
    {

        if (s[i] == '(')
            st.push(i);
        else if (st.empty() == false)
        {
            int start = st.top();
            st.pop();
            int len = i - start + 1;
            cnt = (start > 0 && s[start - 1] == ')') ? mp[start - 1] + len : len;
            mp[i] = cnt;
        }
    }

    int maxLength = 0, count = 1;
    for (auto i : mp)
    {
        if (maxLength < i.second)
        {
            maxLength = i.second;
            count = 1;
        }
        else if (maxLength == i.second)
        {
            count++;
        }
    }

    cout << maxLength << " " << count;
    return 0;
}
