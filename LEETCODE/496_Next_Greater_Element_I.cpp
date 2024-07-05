#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{

    int n;
    cin >> n;
    std::vector<int> nums1(n);
    for (auto &i : nums1)
        cin >> i;
    int m;
    cin >> m;
    vector<int> nums2(m);
    for (auto &i : nums2)
        cin >> i;

    stack<int> st;

    vector<int> res;
    map<int, int> mp;
    for (int i = m - 1; i >= 0; --i)
    {
        while (st.empty() == false && nums2[i] >= st.top())
            st.pop();

        if (st.empty())
            // res.push_back(-1);
            mp[nums2[i]] = -1;
        else
        {
            // res.push_back(st.top());
            mp[nums2[i]] = st.top();
        }

        st.push(nums2[i]);
    }
    for (int i = 0; i < n; ++i)
    {
        // cout << mp[nums1[i]] << " ";
        res.push_back(mp[nums1[i]]);
    }
    // for (auto i : res)cout << i << " ";
}