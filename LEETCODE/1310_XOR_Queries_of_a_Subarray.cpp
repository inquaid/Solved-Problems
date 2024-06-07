#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Your code here
    class Solution
    {
    public:
        vector<int> xorQueries(vector<int> &arr, vector<vector<int>> &queries)
        {
            int sz = arr.size();
            vector<int> prex_sum(sz);
            prex_sum[0] = arr[0];
            for (int i = 1; i < sz; i++)
            {
                prex_sum[i] = prex_sum[i - 1] ^ arr[i];
            }
            vector<int> res;
            for (auto i : queries)
            {
                if (i[0] == 0)
                {
                    res.push_back(prex_sum[i[1]]);
                }
                else
                {
                    res.push_back(prex_sum[i[1]] ^ prex_sum[(i[0] - 1)]);
                }
            }
            return res;
        }
    };
    return 0;
}