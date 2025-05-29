#include<stdio.h>
int main()
{
    double result1 = sqrt(25);

    printf("%.2lf", result1);

    int x;
    printf("\nEnter an integer x :");
    scanf("%d", &x);
    double result2;

    result2 = sqrt(x);

    printf("Result 2 is : %.2lf" , result2);

    return 0;
}
