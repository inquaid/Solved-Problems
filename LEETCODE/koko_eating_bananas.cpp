#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isPossible(vector<int> &piles, int h, int chk)
    {
        double ans = 0, n = piles.size();
        for (int i = 0; i < n; i++)
        {
            ans += (piles[i] + chk - 1) / chk;
        }

        return ans <= h;
    }

    int minEatingSpeed(vector<int> &piles, int h)
    {
        int l = 1, r = 1, n = piles.size();
        for (int i = 0; i < n; i++)
        {
            r = max(r, piles[i]);
        }
        int ans = INT_MAX;
        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            if (isPossible(piles, h, mid))
            {
                ans = min(ans, mid);
                r = mid - 1;
            }
            else
                l = mid + 1;
        }
        return ans;
    }
};