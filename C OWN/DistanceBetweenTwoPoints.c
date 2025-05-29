#include<stdio.h>
int main()
{

    double X1,X2,Y1,Y2,res1,res2;

    printf("Enter first Coordinates :");
    scanf("%lf %lf" , &X1 , &Y1);

    printf("Enter second Coordinates :");
    scanf("%lf %lf" , &X2 , &Y2);

    res1 = pow( (X1 - X2 ),2 ) + pow( ( Y1 - Y2 ),2);
    res2 = sqrt(res1);

    printf("Distance between TWO coordinates :%.4lf" , res2);


    getch();
}
