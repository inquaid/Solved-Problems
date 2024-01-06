#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int q;
    cin >> q;
    while (q--)
    {
        set<int> s;
        int n, cnt = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            if (i == 0 && temp != 1)
            {
                cnt++;
            }
            //  if(i==n-1 && temp != n){
            //     cnt++;
            // }
            s.emplace(temp);
        }
        int maxx = *s.rbegin();
        int sie = s.size();
        if (sie == n && maxx == n && cnt == 0)
        {
            cout << "YES";
        }
        else
            cout << "NO";

        cout << endl;
    }
}