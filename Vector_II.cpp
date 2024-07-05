#include <bits/stdc++.h>
using namespace std;

int main()
{

    //     vector<int> v = {1, 2, 3, 4, 5};
    //     // v.push_back(1,2);
    //     v.insert(v.begin()+1,22);
    //     v.erase(v.begin(),v.begin()+2);
    // for(auto i : v)cout<<i<<" ";

    // return 0;
    int n, q;
    cin >> n >> q;
    vector<int> v;
    while (q--)
    {
        int a;
        cin >> a;
        if (a == 0)
        {
            int t, x;
            // cin>>t>>x;
            v.push_back(x);
        }
        else
        {
            int t;
            cin >> t;
            if (a == 1)
            {
                // if (v.empty() == false)
                {
                    for (int i = 0; i < t; i++)
                    {
                        cout << v[i] << " ";
                    }
                }
                cout << endl;
            }
            else
            {
                v.erase(v.begin(),v.begin()+t);
            }
        }
    }
}