#include<stdio.h>
int main()
{
    float lenth , width , area;

    printf("Enter lenth :");
    scanf("%f", &lenth);

    printf("Enter width :");
    scanf("%f" , &width);

    area = lenth * width ;

    printf("Area of rectangle : %.3f", area);

    getch();
}
