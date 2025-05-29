#include<stdio.h>
int main()
{
    int number;

    printf("Enter any number :");
    scanf("%d",&number);


    if(number>=0 && number<=20)
    {
        printf("Range[0,20]");
    }
    else if(number>=21 && number<=40)
    {
        printf("Range[21,40]");
    }
    else if(number>=41 && number<=60)
    {
        printf("Range[41,60]");
    }
    else if(number>=61 && number<=80)
    {
        printf("Range[61,80]");
    }
    else
    {
        printf("It is not from 0 to 80.");
    }










    getch();
}
