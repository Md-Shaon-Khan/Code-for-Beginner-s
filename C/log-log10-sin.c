#include<stdio.h>
int main()
{
    double x;
    printf("Enter x to get out log10(x) :");
    scanf("%lf" , &x);

    double result = log10(x);

    printf("log10(%.3lf) = %.3lf\n" , x , result);

    double x1;
    printf("Enter x to get out e^(x1) :");
    scanf("%lf" , &x1);

    double result1 = exp(x1);

    printf("e^(%.3lf) = %.3lf\n" , x1 , result1);



    return 0;

}

