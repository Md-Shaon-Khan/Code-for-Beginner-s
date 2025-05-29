#include<stdio.h>
int main()
{
    double x,x1,x2,x3;


    printf("Enter an double number :");
    scanf("%lf" , &x);
    double result = round(x);

    printf("Value after round :%.2lf\n" , result);

    printf("Enter another double integer :");
    scanf("%lf" , &x1);

    double result1 = trunc(x1);
    printf("Value after trunc :%.2lf\n" , result1);

    printf("Enter another double integer :");
    scanf("%lf" , &x2);

    double result2 = ceil(x2);
    printf("Value after ceil :%.2lf\n" , result2);

    printf("Enter another double integer :");
    scanf("%lf" , &x3);

    double result3 = floor(x3);
    printf("Value after floor :%.2lf\n" , result3);


    return 0;
}
