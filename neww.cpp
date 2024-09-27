#include<stdio.h>
int main()
{
    long long N,A,sum,sum1;
    scanf("%lld",&N);
    long long ara[N];
    for(A=0;A<N;A++){
        scanf("%lld",&ara[A]);
        sum+=ara[A];
    }
    if(sum>=0){
        printf("%lld",sum);
    }
    else if(sum<0){
        sum1=(-1)*sum;
        printf("%lld",sum1);
    }
    return 0;
    
}