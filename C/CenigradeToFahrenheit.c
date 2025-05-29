#include<stdio.h>
int main()
{
    float C , F;
    printf("Enter centigrade :");
    scanf("%f",&C);

    F = (C / 5)*9 + 32 ;

    printf("Fahrenheit is =%.2f" , F);

    getch();
}
