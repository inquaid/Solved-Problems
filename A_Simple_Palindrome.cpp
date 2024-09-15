#include <bits/stdc++.h>
using namespace std;

string ary = "aeiou";
map<char, int> mp;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        mp.clear();
        int temp = floor(n / 5.0);
        int remainder = n % 5, i = 0;
        multiset<char> ans;
        for (i = 0; i < temp; i++)
        {
            ans.insert(ary[0]);
            ans.insert(ary[1]);
            ans.insert(ary[2]);
            ans.insert(ary[3]);
            ans.insert(ary[4]);
        }
        for (int i = 0; i < remainder; i++)
        {
            ans.insert(ary[i]);
        }
        for (auto i : ans)
        {
            cout << i;
        }

        cout << endl;
    }
}
