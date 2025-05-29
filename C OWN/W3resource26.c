#include<stdio.h>
#include<math.h>
int main()
{


    int x,i,y=0,sum=0;

    printf("Enter how many numbers you want to calculate :");
    scanf("%d",&x);

    for(i=0;i<x;i++)
    {
        y = y+(pow(10,i));
        printf("%d ",y );
        sum = sum + y;

    }

    printf("sum :%d",sum);
















    getch();
}
