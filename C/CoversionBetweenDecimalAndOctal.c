#include<stdio.h>
int main()
{
    int number1 , number2 ;

    printf("Enter Decimal number =");
    scanf("%d" , &number1);

    printf("Enter Octal number =");
    scanf("%o", &number2);


    printf("Octal(from decimal) number = %o\n" , number1);
    printf("Decimal(from octal) number = %d" , number2);



    getch();
}
