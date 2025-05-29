#include<stdio.h>
int main()
{

    int  num1 , num2 ;

    printf("Enter two numbers :");
    scanf("%d %d" , &num1 , &num2);

    if(num1 > 0)
        printf("Positive Number");

    else if(num1 < 0)
        printf("Negative number");

    else
        printf("Zero");


    return 0;
}
