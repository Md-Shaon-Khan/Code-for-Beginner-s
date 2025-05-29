#include<stdio.h>
int main()
{
    //A car can travel 12Km by 1 litre.

    double hour,AvgSpeedByHr,TotalFuel;

    printf("Enter total hour :");
    scanf("%lf" , &hour);
    printf("Enter Avarage speed Km per Hour :");
    scanf("%lf" , &AvgSpeedByHr);

    TotalFuel = ((AvgSpeedByHr * hour) /12) ;

    printf("Total Fuel need :%.3lf" , TotalFuel);





    return 0;
}
