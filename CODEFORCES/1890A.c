#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    return (*(long long int *)a - *(long long int *)b);
}

int main()
{
    int n;
    scanf("%d", &n);
    while (n--)
    {
        long long int a;
        scanf("%lld", &a);
        long long int ary[a];
        for (int i = 0; i < a; i++)
        {
            scanf("%lld", &ary[i]);
        }
        qsort(ary, a, sizeof(long long int), compare);
        long long int arr[a], ayy[a], k = 0, cnt = 0;
        for (long long int i = 0, j = a - 1;; i++, j--)
        {
            //  if(cnt==a) {break;}
            arr[k] = ary[i];
            ayy[k] = ary[j];
            k++;
            cnt++;
            if (cnt == a)
            {
                break;
            }
            arr[k] = ary[j];
            ayy[k] = ary[i];

            k++;
            cnt++;
            if (cnt == a)
            {
                break;
            }
        }
        long long int result = arr[0] + arr[1];
        int ji = 0;
        long long int add = 0;
        for (long long int i = 0; i < k - 1; i++)
        {

            add = arr[i] + arr[i + 1];
            if (add != result)
            {
                ji++;
                break;
            }
        }
        result = ayy[0] + ayy[1];
        int w = 0;
        for (long long int i = 0; i < k - 1; i++)
        {

            add = ayy[i] + ayy[i + 1];
            if (add != result)
            {
                w++;
                break;
            }
        }

        if (ji == 0 || w == 0)
            printf("Yes\n");
        else
            printf("No\n");
    }
}