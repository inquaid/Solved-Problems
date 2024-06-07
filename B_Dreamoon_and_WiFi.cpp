#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, ss;
    cin >> s >> ss;
    cout << (double)(count(ss.begin(), ss.end(), '+') + count(ss.begin(), ss.end(), '-')) / (count(s.begin(), s.end(), '+') + count(s.begin(), s.end(), '-'));
}