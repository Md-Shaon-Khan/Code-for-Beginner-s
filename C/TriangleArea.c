#include<stdio.h>
int main()
{
    float height , base , area;

    printf("Enter the height :");
    scanf("%f" , &height);

    printf("Enter the base :");
    scanf("%f" , &base);

    area = 0.5 * base * height ;

    printf("Area :%.3f" , area) ;


    return 0;
}
