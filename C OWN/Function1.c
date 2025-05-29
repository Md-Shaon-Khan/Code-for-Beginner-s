#include<stdio.h>
double add(double num1 , double num2)
{
    double SUM = num1 + num2 ;
    return SUM;
}
int main()
{
    double a , b , c ;

    a = 3.2 ;
    b = 4.5 ;

    c = add(a,b);
    printf("SUM :%.2lf" , c);

    getch();
}
