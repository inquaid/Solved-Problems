#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>

void merge(vi &left, vi &right, vi &v);

void devide(vi &v)
{
    int len = v.size();
    if (len < 2)
    {
        return;
    }
    int half = len / 2;
    vi left(half), right(len - half);
    copy(v.begin(), v.begin() + half, left.begin());
    copy(v.begin() + half, v.end(), right.begin());

    devide(left);
    devide(right);
    merge(left, right, v);
}

void merge(vi &left, vi &right, vi &v)
{
    int l = left.size(), r = right.size(), i = 0, j = 0, k = 0;
    while (i < l && j < r)
    {
        if (left[i] < right[j])
        {
            v[k++] = left[i];
            i++;
        }
        else
        {
            v[k++] = right[j];
            j++;
        }
    }
    while (i < l)
    {
        v[k++] = left[i++];
    }
    while (j < r)
    {
        v[k++] = right[j++];
    }
}

int main()
{
    vi v = {3, 1, 2, 4, 2, 3, 5, 2};
    devide(v);
    for (auto i : v)
        cout << i << " ";
}