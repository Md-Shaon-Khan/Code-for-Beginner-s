#include<stdio.h>
int main()
{
    int num1 , num2;

    printf("Enter First number :");
    scanf("%d" , &num1);

    printf("Enter Second Number");
    scanf("%d" , &num2);

    if(num1> num2)
    printf("Large =%d", num1);

    else if(num1 < num2)
    printf("Large =%d", num2);

    else
        printf("Numbers are equal");


  return 0;

}

