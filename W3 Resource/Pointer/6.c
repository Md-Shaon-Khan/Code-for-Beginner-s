#include<stdio.h>
int main()
{
    int number1,number2,*num1,*num2;

    scanf("%d %d",&number1,&number2);

    num1 = &number1;
    num2 = &number2;

    if(*num1 > *num2)
    {
        printf("%d",*num1);
    }
    else
    {
        printf("%d",*num2);
    }



    return 0;
}