#include<stdio.h>
int main()
{


    printf("1 + 1/2 + 1/3 + 1/4 + 1/5 ... 1/n\n");
    double sum=0,n,i;
    printf("Enter the n :");
    scanf("%lf" , &n);

    printf("1 + 1/2 + 1/3 + 1/4 + 1/5 ... 1/%.lf\n",n);
    for(i=1;i<=n;i++)
    {
        sum= sum +(1/i);
    }

    printf("SUM :%.2lf" , sum);

    return 0;
}
