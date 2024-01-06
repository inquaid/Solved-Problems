#include <stdio.h>
int main()
{

    long long int n, t, times[100000] = {0}, i, temp, count = 0, j = 0, highest = 0, start = 0;

    scanf("%lld%lld", &n, &t);
    for (i = 0; i < n; i++)
    {
        scanf("%lld", &times[i]);
    }

    start = 0;
    temp = t;
    for (i = 0; i < n; i++)
    {
        if (times[i] <= temp)
        {
            count++;
            temp = temp - times[i];
        }
        else
        {
            if (count > highest)
            {
                highest = count;
            }
            count--;
            temp = temp + times[start];
            start++;
            i--;
        }
    }
    if (count > highest)
    {
        highest = count;
    }

    /*
    for (i=0;i<n;i++)
    {
        count = 0;
        temp = t;
        j = i;
        while (j < n)
        {
            if (times[j] <= temp) { count++; temp = temp - times[j]; }
            else { break; }
            j++;
        }
        if (highest < count) { highest = count; }
        count--; temp = temp + times[i]; j = i+
    }*/

    printf("\n%lld", highest);

    return 0;
}