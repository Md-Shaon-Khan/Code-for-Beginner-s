#include<stdio.h>
int main()
{

    printf("Test data :");

    int num1,num2;

    printf("Enter the first number :");
    scanf("%d",&num1);
    printf("Enter the second number :");
    scanf("%d",&num2);

    printf("Expected output.\n");

    if(num1%num2==0 || num2%num1==0)
    {
        printf("Multiplied!");
    }
    else
    {
        printf("Not Multiplied.");
    }





    getch();
}
