#include<stdio.h>
int main()
{
    float A,B,C;
    float MEDIA;
    scanf("%f %f %f",&A,&B,&C);
    MEDIA = (A*2 + B*3 + C*5) / 10 ;

    printf("MEDIA = %.1f",MEDIA);

    return 0;
}