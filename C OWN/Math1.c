#include<stdio.h>
int main()
{
    double x,y,x_plus_y,x_minus_y;

    printf("Enter the value of x+y =");
    scanf("%lf" , &x_plus_y);

    printf("Enter the value of x-y =");
    scanf("%lf" , &x_minus_y);

    x = (x_plus_y + x_minus_y) / 2;

    y = (x_plus_y - x_minus_y) / 2;

    printf("X = %.2lf\n" , x);
    printf("Y = %.2lf\n" , y);





    getch();
}

