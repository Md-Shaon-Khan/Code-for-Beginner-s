#include<stdio.h>
#include<math.h>
int main()
{
    float X1,X2,Y1,Y2,distance;

    scanf("%f %f",&X1,&Y1);
    scanf("%f %f",&X2,&Y2);

    distance = pow((X2-X1),2) + pow((Y2-Y1),2);
    distance = sqrt(distance);

    printf("%.4f",distance);

    return 0;
}