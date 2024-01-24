//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string lexicographicallySmallest(string S, int k)
    {
        int l = S.length();
        if (l & (l - 1))
        {
            k += k;
        }
        else
            k /= 2;
        if (k >= l)
        {
            return "-1";
        }
        stack<char> st;
        for (int i = 0; i < l; i++)
        {
            while (!st.empty() && k > 0 && st.top() > S[i])
            {
                st.pop();
                k--;
            }
            st.push(S[i]);
        }
        while (k > 0 && !st.empty())
        {
            st.pop();
            k--;
        }
        string ans;
        while (!st.empty())
        {
            ans = st.top() + ans;
            st.pop();
        }
        //  reverse(ans.begin(), ans.end());

        return ans;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S;
        int k;
        cin >> S >> k;
        Solution ob;
        cout << ob.lexicographicallySmallest(S, k) << endl;
    }
    return 0;
}
