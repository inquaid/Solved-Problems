// stop seeing my code -_-

#include <stdio.h>
#define F for (int i = 0;; i++)

int main()
{
    long long int t, z = 0;
    scanf("%lld", &t);
    F
    {
        long long int d = (t >= 100) ? 100 : (t >= 20) ? 20
                                         : (t >= 10)   ? 10
                                         : (t >= 5)    ? 5
                                                       : t;

        if (t < 5)
        {
            z += t;
            break;
        }

        else
        {
            z += t / d;
            t = t % d;
        }

        if (t == 0)
            break;
    }

    printf("%lld", z);
}