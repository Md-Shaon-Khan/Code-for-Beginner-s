#include<stdio.h>

struct time
{
    int hours;
    int min;
    int sec;
};

int main()
{
    struct time time1,time2,time3;

    scanf("%d %d %d",&time1.hours,&time1.min,&time1.sec);

    scanf("%d %d %d",&time2.hours,&time2.min,&time2.sec);
   
    int sec = time1.sec + time2.sec;
    int min = time1.min + time2.min;
    if(sec > 60)
    {
        min = min + 1;
        sec = sec % 60;
    }
    int hour = time1.hours + time2.hours;
    if(min>60)
    {
        if(min > 60 && min<120){
         hour +=1;
         min = min % 60;
        }
        

        else
        {
            hour += 2;

        }
    }

    printf("%d   %d   %d",hour,min,sec);



    return 0;
}