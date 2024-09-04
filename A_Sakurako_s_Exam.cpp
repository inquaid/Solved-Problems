#include <iostream>
using namespace std;
bool isEven(int x)
{
    return (x & 1) == false;
}

int main()
{
    int t;
    std::cin >> t;

    while (t--)
    {
        int ones, twos;
        cin >> ones >> twos;

        if (!isEven(ones) and !isEven(twos))
    }

    return 0;
}