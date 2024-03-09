
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
// int swp(int *a, int *b)
// {
//     int c = *a;
//     *a = *b;
//     *b = c;
// }

int main()
{
    int n, max = INT_MIN;
    // cin >> n;
    int ary[] = {1, 2, 6, 3, 2, 3};
    n = 6;
    for (int i = 0; i < 6; i++)
    {
        if (ary[i] > max)
            max = ary[i];
    }
    // cout << max;
    max += 5;
    int tray[max];
    // int *tray = (int *)calloc(max, 0);
    for (int i = 0; i < max; i++)
    {
        tray[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        // cout<<ary[i]<<" ";
        tray[ary[i]]++;
    }
    // cout<<endl;4
    int k = 0;
    for (int i = 0; i < max; i++)
    {
        while (tray[i]--)
            ary[k++] = i;
        // cout << i << " ";
    }

    for (int i = 0; i < k; i++)
    {
        cout << ary[i] << " ";
    }

    // vector<int> v(n);
    // for (auto &i : v)
    //     cin >> i;
    // int sum = 0;
    // int mult=1;
    // sort(v.begin(), v.end());
    // for (int i = 0, j = n - 1; i < j; j-=2, i+=2)
    // {
    //    mult *= abs(v[i]-v[j-1]);
    //    mult *= abs(v[i+1]-v[j]);
    // }
    // cout << mult;
    printf("\n");
}
