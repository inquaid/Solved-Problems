#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, q;
        cin >> n >> m >> q;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            a[i] = temp;
        }

        bool possible = true;
        vector<int> b;
        for (int i = 0; i < m; i++)
        {
            int temp;
            cin >> temp;
            if(i != 0){
                b.back() != temp;
                b.push_back(temp);
            }
            else b.push_back(temp);
        }

        m = b.size();
        unordered_set<int> st;
        map<int, int> mp;
        int index = 0;
        for (int i = 0; i < m; i++)
        {
            if(b[i] == a[index]) {
                st.insert(a[index]);
                index++;
            }
            else{
                if(st.find(b[i]) == st.end()){
                    possible = false;
                    break;
                }
            }
        }
        

        if (possible)
            cout << "YA\n";
        else
            cout << "TIDAK\n";
    }
}