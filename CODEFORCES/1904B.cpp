#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T = 1;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        vector<pair<int, int>> ary(N);
        for (int i = 0; i < N; i++)
        {
            cin >> ary[i].first;
            ary[i].second = i;
        }
        sort(ary.begin(), ary.end());
        vector<int> re(N);
        int lst = 0;
        long long sum = ary[0].first;
        for (int i = 1; i < N; i++)
        {
            if (sum < ary[i].first)
            {
                for (int j = lst; j < i; j++)
                {
                    re[ary[j].second] = i - 1;
                    lst = i;
                }
            }
            sum += ary[i].first;
        }
        for (int j = lst; j < N; j++)
        {
            re[ary[j].second] = N - 1;
        }
        for (int i = 0; i < N; i++)
        {
            cout << re[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
