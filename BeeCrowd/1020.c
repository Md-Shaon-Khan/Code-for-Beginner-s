#include<stdio.h>
int main()
{
    int total_days,year,months,days;

    scanf("%d",&total_days);

    year = (total_days / 365);

    months = ((total_days % 365) / 30 );

    days = total_days - ((year * 365)+(months * 30));

    printf("%d ano(s)",year);
    printf("\n%d mes(es)",months);
    printf("\n%d dia(s)",days);

    return 0;
}