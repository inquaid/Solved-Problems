#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,sum=0;
        cin >> n;
        int ary[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ary[i];
            sum+=ary[i];
        }
        cout<<(int)ceil((double)sum/n)<<endl;
    
    }
}