#include <bits/stdc++.h>
using namespace std;

typedef struct assistant
{
    int t = 0;
    int z = 0;
    int y = 0;
} assist;

int m, n;
bool possible(assist assit, int time)
{
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        
    }
}

int main()
{
    cin >> m >> n;
    assist my_assit[n];
    for (int i = 0; i < n; i++)
    {
        int t, z, y;
        cin >> t >> z >> y;
        my_assit[i].t = t;
        my_assit[i].z = z;
        my_assit[i].y = y;
    }
    int res = 0, l = 0, r = 1e9;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
    }
}