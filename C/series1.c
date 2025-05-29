#include<stdio.h>
int main()
{

    int n,sum=0,i;
    printf("Enter the last number :");
    scanf("%d",&n);
    printf("1+3+5+........+%d\n" ,n);

    for(i=1; i<=n; i=i+2)
    {
       sum=sum+i;
    }

    printf("Sum = %d",sum);
    return 0;
}
