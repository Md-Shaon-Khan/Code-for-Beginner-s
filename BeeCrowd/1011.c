#include<stdio.h>
#include<math.h>
#define PI 3.14159
int main()
{
    float R,volume;

    scanf("%f",&R);

    volume = (4.0/3) * PI * pow(R,3);

    printf("VOLUME = %.3f",volume);



    return 0;
}