#include<stdio.h>
int main()
{
    int year;

    scanf("%d",&year);

    if(year >= 18)
    {
        printf("Congratulation! You are eligible for casting your vote.");
    }
    else
    {
        printf("Sorry! you are not eligible for casting your vote");
    }



    return 0;
}