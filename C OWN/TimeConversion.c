#include<stdio.h>
int main()
{
    int InputSec,min,hour,OutputSec;

    printf("Enter times(s) :");
    scanf("%d" , &InputSec);

    min = InputSec / 60 ;
    OutputSec = InputSec % 60 ;

    if(min>60)
    {
        hour = min / 60 ;
        min = min % 60 ;
    }
    else
    {
        hour = 0;
    }

    printf("Hour : Min : Sec = %d : %d : %d" , hour , min , OutputSec);




    getch();
}
