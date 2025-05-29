#include<stdio.h>
int main()
{
    int distance;
    float totalFuel,KmL;

    printf("Enter the total distance(traveled) of your car :");
    scanf("%d" , &distance);
    printf("Total fuel that you spent :");
    scanf("%f" , &totalFuel);

    KmL = distance/totalFuel;

    printf("Average Consumption :%.3f Km/l" , KmL);





    getch();
}
