#include <stdio.h>
#define endl '\n'
// using namespace std;

int max(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    return b;
}

int main()
{
    int n, k;
    scanf("%d%d", &n, &k);
    int _and = 0, _or = 0, _xor = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if ((i & j) < k)
                _and = max(_and, i & j);
            if ((i | j) < k)
                _or = max(_or, i | j);
            if ((i ^ j) < k)
                _xor = max(_xor, i ^ j);
        }
    }
    printf("%d\n%d\n%d", _and, _or, _xor);
}