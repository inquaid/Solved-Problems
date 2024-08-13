#include <bits/stdc++.h>
using namespace std;

#define vii vector<int>
string merge(string &left, string &right);

string devide(string &s)
{
    if (s.size() <= 1)
    {
        return s;
    }
    string right = "";
    right = s[s.size() - 1];
    s.pop_back();
    string left = s;
    devide(left);
    devide(right);

    s = merge(left, right);
    return s;
}

string merge(string &left, string &right)
{
    string s = "";
    s += left;
    s += right;
    s += left;
    return s;
}

int main()
{

    int n;
    cin >> n;
    string s = "";
    for (int i = 0; i < n; i++)
    {
        s += 'A' + i;
    }

    cout << devide(s);
    // // cout << cnt;
}