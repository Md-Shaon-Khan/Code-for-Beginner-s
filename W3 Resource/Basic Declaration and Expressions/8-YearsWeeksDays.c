#include<stdio.h>
int main()
{
    int NumberOfDays,Years,Weeks,Days;

    printf("Test Data :\n");

    printf("Number of days :");
    scanf("%d",&NumberOfDays);

    printf("\nExpected Output :\n");

    Years = NumberOfDays / 365;
    NumberOfDays = NumberOfDays - (Years*365);
    Weeks = NumberOfDays / 7;
    NumberOfDays = NumberOfDays - (Weeks*7);
    Days = NumberOfDays;

    printf("Years :%d",Years);
    printf("\nWeeks :%d",Weeks);
    printf("\nDays  :%d",Days);











    return 0;
}
