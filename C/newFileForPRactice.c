#include<stdio.h>
int main()
{
    double n,sum=0,i;

    printf("Enter the last number :");
    scanf("%lf",&n);

    for(i=1;i<=n;i++)
    {
        sum =sum +(1/i);


        if(i==1)
            printf("\n 1 +");

        else if(i==n)
            printf("(1/%.2lf)" , i);
        else
            printf("(1/%.2lf) +",i);
    }

    printf("\nsum = %.2lf" , sum);

    return 0;
}
