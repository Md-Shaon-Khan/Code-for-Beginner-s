#include<stdio.h>
int main()
{

    int X;
    float Y , Z;
    scanf("%d",&X);
    scanf("%f",&Y);
    
    Z = (X / Y);

    printf("%.3f km/l",Z);

    return 0;
}