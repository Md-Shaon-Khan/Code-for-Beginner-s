#include<stdio.h>
int main()
{
    int spent_time,average_speed;
    scanf("%d %d",&spent_time,&average_speed);

    float fuel_liters = ((float)spent_time * average_speed ) / 12;

    printf("%.3f",fuel_liters);


    return 0;
}