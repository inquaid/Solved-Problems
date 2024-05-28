#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define H cout << "H"
#define R cout << "R"
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--)
    {
        int m;
        string input;
        cin >> m >> input;
        
        int n, s, e, w;
        n = count(input.begin(), input.end(), 'N');
        s = count(input.begin(), input.end(), 'S');
        e = count(input.begin(), input.end(), 'E');
        w = count(input.begin(), input.end(), 'W');
        
        if ((abs(n - s) & 1) || (abs(e - w) & 1))
        {
            cout << "NO" << endl;
            continue;
        }
        
        // Check if moves are valid
        if (m < 3 && (n == 1 || s == 1 || e == 1 || w == 1))
        {
            cout << "NO" << endl;
            continue;
        }
        
        // Variables to track positions
        int x = 0, y = 0;
        
        for (char move : input)
        {
            switch (move)
            {
                case 'N':
                    y++;
                    break;
                case 'S':
                    y--;
                    break;
                case 'E':
                    x++;
                    break;
                case 'W':
                    x--;
                    break;
            }
        }
        
        // Check if back to origin
        if (x == 0 && y == 0)
        {
            for (char move : input)
            {
                if (move == 'N' || move == 'S')
                {
                    if (move == 'N')
                        y++;
                    else
                        y--;
                    
                    if (y % 2 == 0)
                        H;
                    else
                        R;
                }
                else if (move == 'E' || move == 'W')
                {
                    if (move == 'E')
                        x++;
                    else
                        x--;
                    
                    if (x % 2 == 0)
                        H;
                    else
                        R;
                }
            }
            cout << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}