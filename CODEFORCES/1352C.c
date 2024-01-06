#include <stdio.h>
void repeat();

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        repeat();
    }
}

void repeat()
{
    long long int n, k, sui = 0, reminder = 0;
    scanf("%lld%lld", &n, &k);

    for (long long int i = 0;; i++)
    {
        long long int temp = reminder;
        reminder = k / n;
        long long int add = reminder - temp;
        k += add;
        if ((k / n) == reminder)
            break;
    }
    //   for(int i=0;  ;i++ ){

    // // k+=reminder;

    // }

    printf("%lld\n", k);
}