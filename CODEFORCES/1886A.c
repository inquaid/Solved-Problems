#include <stdio.h>
long long int check()
{
    long long int k; // the num that will be check
    scanf("%lld", &k);
    long long int a = 1, c = 2;
    // long long int tota=k-a-c;
    long long int r = k - 1 - 2;
    long long int b = (r % 3 == 0) ? (k - 1 - 4) : (k - 1 - 2);

    long long int total = a + b + c;
    long long int total2 = a + b + 4;
    if (total2 == k)
        c = 4;
    if (total == k && a != b && b != c && a != c && a > 0 && b > 0 && c > 0)
        printf("yes\n%lld %lld %lld\n", a, b, c);
    else if (total2 == k && a != b && b != c && a != c && a > 0 && b > 0 && c > 0)
        printf("yes\n%lld %lld %lld\n", a, b, c);

    else
        printf("NO\n");
}

int main()
{

    long long int n;
    scanf("%lld", &n);
    for (long long int i = 0; i < n; i++)
    {
        check();
    }
}