#include<stdio.h>

void triangleArea(double a , double b)
{
    double Area = .5 * a * b ;
    printf("Area is :%.3lf" , Area);
}

int main()
{

    double base,height;

    printf("Enter base and height :");
    scanf("%lf %lf" , &base , &height );

    triangleArea(base , height);

    getch();
}
