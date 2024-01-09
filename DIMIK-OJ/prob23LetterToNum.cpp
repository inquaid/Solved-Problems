#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<char, int> mp;
    int cnt = 0, size;
    char temp;
    string s;
    for (char i = 'A'; i <= 'Z'; i++)
    {
        mp[i] = ++cnt;
    }
    // map<char,int>::iterator it;
    // for(it=mp.begin();it!=mp.end();it++){
    //     cout<<(*it).first<<" "<<(*it).second<<endl;
    // }
    int T;
    cin >> T;
    cin.ignore();
    while (T--)
    {
        cin >> s;
        size = s.size();
        for (int i = 0; i < size; i++)
        {

            cout << mp[s[i]];
        }
        cout << endl;
    }
}