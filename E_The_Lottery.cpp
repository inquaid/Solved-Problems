#include <bits/stdc++.h>

using namespace std;

const int N = 1000;
vector<int> lp(N + 1);
vector<int> pr;

void sieve()
{
    for (int i = 2; i <= N; ++i)
    {
        if (lp[i] == 0)
        {
            lp[i] = i;
            pr.push_back(i);
        }
        for (int j = 0; i * pr[j] <= N; ++j)
        {
            lp[i * pr[j]] = pr[j];
            if (pr[j] == lp[i])
            {
                break;
            }
        }
    }
}

int main()
{
    sieve();
    // for(auto i : pr) cout << i << " ";
    for(auto i : lp) cout << i << " ";
}