#include<stdio.h>
int main()
{
    //write a program that prints an integer number.

    int num1 =10 ;
    int num2 =11 ;
    float num3 = 12.05;
    double num4 = 13.8876529;
    char ch ='b';

    printf("Numbers are %d , %d\n",num1 , num2);
    printf("Float number is %.2f\n" , num3);
    printf("Double number is %.5lf\n" , num4 );
    printf("Character is %c\n", ch);

    /* write a program that takes an integer
    and print that number.
    */

    int num;
    printf("Please enter any integer : ");
    scanf("%d",&num);
    printf("You have pressed : %d\n", num);



    return 0;
}
