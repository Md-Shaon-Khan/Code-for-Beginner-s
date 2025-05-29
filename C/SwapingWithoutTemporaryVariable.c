#include<stdio.h>
int main()
{
    int num1 = 12 , num2 = 4;

    num1 = num1 - num2;
    num2 = num1 + num2;
    num1 = num2 - num1;

    printf("num1 =%d\n", num1);
    printf("num2 =%d\n", num2);

    return 0;
}
