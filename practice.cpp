#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int res = 0;

    int countD(int num)
    {
        int count = 0;
        if (num == 0)
            return 1;
        while (num > 0)
        {
            num /= 10;
            count++;
        }
        return count;
    }
    int mx = 0;
    int generateKey(int num1, int num2, int num3)
    {
        if (num1 == 0 and num2 == 0 and num3 == 0)
        {
            return res;
            // int mn = mx - countD(res);
            // // cout<<mx<<" ";
            // return res * (pow(10, mn));
        }
        // cout << num1 << " ";
        // cout << num2 << " ";
        // cout << num3 << " \n";

        vector<int> nums = {num1, num2, num3};
        sort(nums.begin(), nums.end());

        num1 = nums[2];
        num2 = nums[1];
        num3 = nums[0];

        int size1 = countD(num1);
        int size2 = countD(num2);
        int size3 = countD(num3);
        mx = max({mx, size1, size2, size3});

        if (size1 > size2)
        {
            res *= 10;
            // res += num1 / pow(10, size1 - 1);
            num1 = num1 % (int)pow(10, size1 - 1);
            if ((size1 - countD(num1)) > 1)
                res *= 10;
            // num2 = num2 % (int)pow(10, size2 - 1);
            // num3 = num3 % (int)pow(10, size3 - 1);

            return generateKey(num1, num2, num3);
        }
        else if (size2 > size3)
        {
            // int plus = min(num1 / pow(10, size1 - 1), num2 / pow(10, size2 - 1));
            res *= 10;
            num1 = num1 % (int)pow(10, size1 - 1);
            num2 = num2 % (int)pow(10, size2 - 1);
            // num3 = num3 % (int)pow(10, size3 - 1);

            return generateKey(num1, num2, num3);
            // res += plus;
        }
        else
        {
            // cout<<" else  ";

            int plus = min({floor(num1 / pow(10, size1 - 1)), floor(num2 / pow(10, size2 - 1)), floor(num3 / pow(10, size3 - 1))});
            res *= 10;
            res += plus;
        }
        num1 = num1 % (int)pow(10, size1 - 1);
        num2 = num2 % (int)pow(10, size2 - 1);
        num3 = num3 % (int)pow(10, size3 - 1);

        while ((size1 - countD(num1)) > 1 or (size2 - countD(num2)) > 1 or (size2 - countD(num2)) > 1)
        {
            size1--;
            size2--;
            size3--;
            num1 = num1 % (int)pow(10, size1 - 1);
            num2 = num2 % (int)pow(10, size2 - 1);
            num3 = num3 % (int)pow(10, size3 - 1);
            res *= 10;
        }
        return generateKey(num1, num2, num3);
    }
};

int main()
{
    int num1, num2, num3;
    cin >> num1 >> num2 >> num3;

    Solution sc;
    cout << sc.generateKey(num1, num2, num3);
    // sorting for simplicity

    // cout << num1 << " " << num2 << " " << num3;
}