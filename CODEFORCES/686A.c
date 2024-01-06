#include <stdio.h>
int main()
{
    long long a;
    long long b;
    scanf("%lld %lld", &a, &b);
    getchar();
    long long tempI, sum = b, j = 0;
    char tempC;
    for (long long i = 0; i < a; i++)
    {

        scanf("%c", &tempC);
        scanf("%lld", &tempI);

        getchar();
        if (sum < tempI && tempC == '-')
        {
            j++;
            continue;
        }
        sum = (tempC == '+') ? sum + tempI : sum - tempI;
    }
    printf("%lld %lld\n", sum, j);
}