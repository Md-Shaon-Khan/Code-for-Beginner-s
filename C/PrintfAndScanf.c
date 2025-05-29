#include<stdio.h>
int main()
{
    int num1 , num2 ;
    float num3 , num4;
    double num5 , num6;
    printf("Enter first integer number :") ;
    scanf( "%d" , & num1 ) ;

    printf("Enter second integer number :") ;
    scanf("%d" , &num2 );

    printf("Your 1st entered number %d\n" , num1 );
    printf("Your 2nd entered number  %d\n" , num2 ) ;


    printf("Now entered another two float number :");
    scanf("%f %f" , &num3 , &num4 );

    printf("Last two float number : %.3f , %.3f\n " , num3 , num4);

    printf("Now entered another two double number :");
    scanf("%lf %lf" , &num5 , &num6 );

    printf("Last two float number : %lf , %lf " , num5 , num6);

   getch();
}
