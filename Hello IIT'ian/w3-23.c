#include<stdio.h>
int main()
{

    float num1,num2,num3,perimeter;

    printf("Input the first number :");
    scanf("%f",&num1);
    printf("Input the second number :");
    scanf("%f",&num2);
    printf("Input the third number :");
    scanf("%f",&num3);


    if((num1+num2)>num3 &&(num2+num3)>num1 &&(num1+num3)>num2)
    {
       perimeter = num1+num2+num3;
       printf("Expected output:\nPerimeter =%.1f",perimeter);
    }
    else
    {
        printf("Not valid.");
    }









    getch();
}
