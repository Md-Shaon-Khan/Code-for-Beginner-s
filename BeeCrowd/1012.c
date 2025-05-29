#include<stdio.h>
#include<math.h>
#define PI 3.14159
int main()
{
    float A,B,C;
    float triangle_area,circle_area,trapezium_area,square_area,rectangle_area;

    scanf("%f %f %f",&A,&B,&C);

    triangle_area   = (1.0/2) * A * C ;
    circle_area     = PI * pow(C,2) ;
    trapezium_area  = (1.0 / 2) * (A + B) * C ;
    square_area     = pow(B,2) ;
    rectangle_area  = A * B ;

    printf("TRIANGULO: %.3f",triangle_area);
    printf("\nCIRCULO: %.3f",circle_area);
    printf("\nTRAPEZIO: %.3f",trapezium_area);
    printf("\nQUADRADO: %.3f",square_area);
    printf("\nRETANGULO: %.3f",rectangle_area);






    return 0;
}