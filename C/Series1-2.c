
#include<stdio.h>
int main()
{
    int n,i,sum=0;

    printf("1+3+5+7+......+n");
    printf("\nLast number is :");
    scanf("%d",&n);

    for(i=1;i<=n;i=i+2)
    {
        sum = sum + i;
    }

    printf("sum of this series is = %d",sum);








    return 0;
}
