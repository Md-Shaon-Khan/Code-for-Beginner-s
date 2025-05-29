#include<stdio.h>
int main()
{

    int number1 , number2;

    printf("Enter any decimal number : ");
    scanf("%d", &number1);

    printf("\nEnter any Hexa-Decimal number : ");
    scanf("%x", &number2);

    printf("\nHexa-Decimal (from decimal) number is : %x\n" , number1);
    printf("\nDecimal (from hexa-decimal) number is : %d\n" , number2);

    /*for time saving
    I am going to run another program in this file.
    so don't nervus stay tune.
    Conversion between octal and hexa-decimal
    */

    int number3 , number4;

    printf("\nEnter any octal number :");
    scanf("%o",&number3);

    printf("\nHexa-decimal (from octal) number : %x\n" , number3);

    printf("\nEnter any Hexa-Decimal number :");
    scanf("%x",&number4);

    printf("\nOctal (from Hexa-decimal) number : %o\n" , number4);



    getch();
}
