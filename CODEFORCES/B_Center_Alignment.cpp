/*
    just trying to be a good coder
    auther: Azmain Inquaid Haque Turjo
    problem : https://codeforces.com/contest/5/problem/B
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string temp;
    vector<string> v;
    int mx_len = 0;

    while (getline(cin, temp))
    {
        v.push_back(temp);
        int size = temp.size();
        mx_len = max(mx_len, size);
    }

    int vec_size = v.size();

    for (int i = 0; i < mx_len + 2; i++)
    {
        cout << "*";
    }
    cout << endl;

    bool left_align = true;

    for (int i = 0; i < vec_size; i++)
    {
        cout << "*";

        int total_gap = mx_len - v[i].size();
        int spaceL, spaceR;

        if (total_gap % 2 == 0)
        {
            spaceL = spaceR = total_gap / 2;
        }
        else
        {
            if (left_align)
            {
                spaceL = total_gap / 2;
                spaceR = total_gap - spaceL;
                left_align = false;
            }
            else
            {
                spaceR = total_gap / 2;
                spaceL = total_gap - spaceR;
                left_align = true;
            }
        }

        for (int j = 0; j < spaceL; j++)
        {
            cout << " ";
        }
        cout << v[i];
        for (int j = 0; j < spaceR; j++)
        {
            cout << " ";
        }

        cout << "*" << endl;
    }

    for (int i = 0; i < mx_len + 2; i++)
    {
        cout << "*";
    }
    cout << endl;

    return 0;
}