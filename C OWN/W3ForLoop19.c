#include<stdio.h>
int main()
{

    double n;
    double sum=0;

    printf("1 + 1/2 + 1/3 + 1/4 + ..... +1/n\n" );
    printf("Enter the n :");
    scanf("%lf" , &n);
    printf("\n\n1 + 1/2 + 1/3 + 1/4 + ..... +1/%.lf\n",n );

    for(double i=1;i<=n;i++)
    {


       sum = sum + (1/i);

    }

    printf("SUM :%.5lf" , sum);












    getch();
}
