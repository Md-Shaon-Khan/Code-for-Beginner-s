#include<stdio.h>
struct year
{
    int year,month,days;
};

int main()
{
    struct year year1,year2;

    printf("Please enter DAY  :  MONTH  : YEAR ----\n");
    scanf("%d %d %d",&year1.days,&year1.month,&year1.year);
    scanf("%d %d %d",&year2.days,&year2.month,&year2.year);

     if(year1.days < year2.days)
     {
        year1.days = 30 - (year2.days-year1.days);
        year1.month -= 1;
     }
     else
     {
        year1.days = year1.days - year2.days;
     }
     if (year1.month < year2.month)
     {
        year1.month= 12 - (year2.month-year1.month);
        year1.year -= 1;
     }
     else
     {
        year1.month = year1.month - year2.month; 
     }
      
     year1.year  = year1.year - year2.year;

     int result = year1.year*365 + year1.month*30 + year1.days;

     printf("\nDifference day : %d",result);

    return 0;
}