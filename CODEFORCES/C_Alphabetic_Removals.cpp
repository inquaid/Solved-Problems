#include <bits/stdc++.h>
using namespace std;
#define flash                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

void solve();

int main()
{
    flash;

    int a, b;
    cin >> a >> b;
    string input;
    cin >> input;
    map<char, int> mp;
    for (auto c : input)
    {
        mp[c]++;
    }
    string newBorn = "";
    int sz = input.size();

    int temp = b;
    for (char ch = 'a'; ch <= 'z'; ch++)
    {
        if (mp[ch] >= temp)
        {
            mp[ch] -= temp;
            temp = 0;
            break;
        }
        else
        {
            temp -= mp[ch];
            mp[ch] = 0;
        }
    }
    // map<char, int>::iterator it;
    // for (it = mp.begin(); it != mp.end(); it++)
    // {
    //     if ((*it).second)
    //         cout << (*it).first << " " << (*it).second << endl;
    // }
    reverse(input.begin(), input.end());
    // cout << input << endl;
    for (int i = 0; i < sz; i++)
    {
        if (mp[input[i]] > 0)
        {
            newBorn += input[i];
            mp[input[i]]--;
        }
    }
    reverse(newBorn.begin(), newBorn.end());
    cout << newBorn << endl;

    // cout << input;
    return 0;
}
