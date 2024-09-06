#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool checkTwoChessboards(string coordinate1, string coordinate2)
    {
        string s = coordinate1;
        string s2 = coordinate2;
        int a = 'a' - s[0] + 1;
        int b = s[1] - '0';
        int a2 = 'a' - s2[0] + 1;
        int b2 = s2[1] - '0';

        if (!((a + a2) & 1) == !((b + b2) & 1))
        { // odd
            return true;
        }
        return false;
    }
};