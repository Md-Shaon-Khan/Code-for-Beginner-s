#include<stdio.h>
int main()
{
    int hours,minutes,seconds,times;
    scanf("%d",&times);

    hours = (times / 3600);
    
    minutes = (times % 3600);
    minutes = minutes / 60 ;

    seconds = times - ((hours * 3600 ) + (minutes * 60));

    printf("%d : %d : %d",hours,minutes,seconds);

    return 0;
}