#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, temp;
    cin >> n;
    vector<int> ary;
    vector<int> arr;
    vector<int> art;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        ary.push_back(temp);
    }
    n--;
    for (int i = 0; i < n; i++)
    {

        cin >> temp;
        arr.push_back(temp);
    }
    n--;
    for (int i = 0; i < n; i++)
    {

        cin >> temp;
        art.push_back(temp);
    }

    unordered_map<int, int> mp;
    for (int num : arr)
    {
        mp[num]++;
    }
    for (int num : ary)
    {
        if (mp.find(num) == mp.end() || mp[num] == 0)
        {
            cout << num << endl;
        }
        else
            mp[num]--;
    }
    unordered_map<int, int> mpy;

    for (int num : art)
    {
        mpy[num]++;
    }

    for (int num : arr)
    {
        if (mpy.find(num) == mpy.end() || mpy[num] == 0)
        {
            cout << num << endl;
        }
        else
            mpy[num]--;
    }
}